#include <stdio.h>
#include "../student-service/student.h"
#include "../course-service/course.h"
#include "../enrollment-service/enrollment.h"

int main() {
    int choice;

    do {
        printf("\n===== Student Course Registration App =====\n");
        printf("1. Add Student\n");
        printf("2. List Students\n");
        printf("3. Add Course\n");
        printf("4. List Courses\n");
        printf("5. Enroll Student\n");
        printf("6. List Enrollments\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent();
                break;
            case 2:
                listStudents();
                break;
            case 3:
                addCourse();
                break;
            case 4:
                listCourses();
                break;
            case 5:
                enrollStudent();
                break;
            case 6:
                listEnrollments();
                break;
            case 0:
                printf("Exiting app.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 0);

    return 0;
}
