#include <stdio.h>
#include "student.h"

void addStudent() {
    FILE *file = fopen("student-service/students.txt", "a");
    if (file == NULL) {
        printf("Error opening students file.\n");
        return;
    }

    int id;
    char name[100];

    printf("Enter Student ID: ");
    scanf("%d", &id);
    getchar();

    printf("Enter Student Name: ");
    fgets(name, sizeof(name), stdin);

    fprintf(file, "%d,%s", id, name);
    fclose(file);

    printf("Student added successfully.\n");
}

void listStudents() {
    FILE *file = fopen("student-service/students.txt", "r");
    if (file == NULL) {
        printf("No students found.\n");
        return;
    }

    char line[256];
    printf("\n--- Students ---\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
}
