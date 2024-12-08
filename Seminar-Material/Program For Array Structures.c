#include <stdio.h>

// Define a structure
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    // Declare an array of structures
    struct Student students[3];

    // Input data
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display data
    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s, Marks: %.2f\n", 
               students[i].id, students[i].name, students[i].marks);
    }

    return 0;
}
