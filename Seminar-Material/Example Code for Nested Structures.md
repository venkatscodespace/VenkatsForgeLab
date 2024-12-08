### **Example Code for Nested Structures:**

```c
#include <stdio.h>
#include <string.h>

// Define the Address structure
struct Address {
    char street[45];
    char city[7];
    int zipCode;
};

// Define the Employee structure with a nested Address structure
struct Employee {
    char name[50];
    int employeeID;
    struct Address officeAddress; // Nested structure
};

int main() {
    // Declare and initialize an Employee variable
    struct Employee employee1;

    // Initialize Employee data
    strcpy(employee1.name, "Shivaraj");
    employee1.employeeID = 1001;

    // Initialize nested Address data
    strcpy(employee1.officeAddress.street, "Gateway (SEZ) 16, GST Road, New Perungalathur");
    strcpy(employee1.officeAddress.city, "Chennai");
    employee1.officeAddress.zipCode = 600063;

    // Print Employee details
    printf("Employee Name: %s\n", employee1.name);
    printf("Employee ID: %d\n", employee1.employeeID);
    printf("Office Address: %s, %s - %d\n", 
           employee1.officeAddress.street,
           employee1.officeAddress.city,
           employee1.officeAddress.zipCode);

    return 0;
}
```

---

### **Output**
```
Employee Name: Shivaraj
Employee ID: 1001
Office Address: Gateway (SEZ) 16, GST Road, New Perungalathur, Chennai – 600063
```

---
