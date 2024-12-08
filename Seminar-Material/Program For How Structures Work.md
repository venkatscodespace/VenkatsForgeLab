## Sample Program For How Structures Work

```c
#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    // Declare and initialize a structure variable
    struct Student student1 = {061, "Venkatram", 98.5};

    // Declare another structure variable
    struct Student student2;

    // Assign values to members of student2
    student2.rollNumber = 062;
    strcpy(student2.name, "Shiva");  // Use strcpy for strings
    student2.marks = 88.0;

    // Print the details of both students
    printf("Student 1:\n");
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n\n", student1.marks);

    printf("Student 2:\n");
    printf("Roll Number: %d\n", student2.rollNumber);
    printf("Name: %s\n", student2.name);
    printf("Marks: %.2f\n", student2.marks);

    return 0;
}
```

---

### **Output**
```
Student 1:
Roll Number: 061
Name: Venkatram
Marks: 98.50

Student 2:
Roll Number: 062
Name: Shiva
Marks: 88.00
```

---
