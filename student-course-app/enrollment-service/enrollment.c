#include <stdio.h>
#include "enrollment.h"

void enrollStudent() {
    FILE *file = fopen("enrollment-service/enrollments.txt", "a");
    if (file == NULL) {
        printf("Error opening enrollments file.\n");
        return;
    }

    int studentId, courseId;

    printf("Enter Student ID: ");
    scanf("%d", &studentId);

    printf("Enter Course ID: ");
    scanf("%d", &courseId);

    fprintf(file, "Student %d enrolled in Course %d\n", studentId, courseId);
    fclose(file);

    printf("Enrollment recorded successfully.\n");
}

void listEnrollments() {
    FILE *file = fopen("enrollment-service/enrollments.txt", "r");
    if (file == NULL) {
        printf("No enrollments found.\n");
        return;
    }

    char line[256];
    printf("\n--- Enrollments ---\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
}
