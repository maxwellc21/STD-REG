#include <stdio.h>
#include "course.h"

void addCourse() {
    FILE *file = fopen("course-service/courses.txt", "a");
    if (file == NULL) {
        printf("Error opening courses file.\n");
        return;
    }

    int id;
    char title[100];

    printf("Enter Course ID: ");
    scanf("%d", &id);
    getchar();

    printf("Enter Course Title: ");
    fgets(title, sizeof(title), stdin);

    fprintf(file, "%d,%s", id, title);
    fclose(file);

    printf("Course added successfully.\n");
}

void listCourses() {
    FILE *file = fopen("course-service/courses.txt", "r");
    if (file == NULL) {
        printf("No courses found.\n");
        return;
    }

    char line[256];
    printf("\n--- Courses ---\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
}
