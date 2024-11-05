#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
} employee1;

int main() {

    strcpy(employee1.name, "JohnDoe");
    employee1.id = 12345;
    strcpy(employee1.department, "HumanResources");
    employee1.salary = 55000.50;
    strcpy(employee1.email, "john.doe@company.com");

    printf("name: %s\n", employee1.name);
    printf("id: %d\n", employee1.id);
    printf("department: %s\n", employee1.department);
    printf("salary: %.2f\n", employee1.salary);
    printf("email: %s\n", employee1.email);

    return 0;
}

