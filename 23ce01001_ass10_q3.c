#include <stdio.h>

union EmpDetails {
    float hourlyWage;
    double fixedSalary;
};

struct Employee {
    int employeeID;
    char name[50];
    union EmpDetails details;
};

int main() {
    struct Employee employee;

    printf("Enter employee ID: ");
    scanf("%d", &employee.employeeID);

    printf("Enter employee name: ");
    scanf("%s", employee.name); 

    printf("Enter hourly wage: ");
    scanf("%f", &employee.details.hourlyWage);

    printf("Enter fixed salary: ");
    scanf("%lf", &employee.details.fixedSalary); // Use %lf for double

    printf("\nEmployee details:\n");
    printf("ID: %d\n", employee.employeeID);
    printf("Name: %s\n", employee.name);
    printf("Hourly Wage: %.2f\n", employee.details.hourlyWage); // Corrected format specifier
    printf("Fixed salary: %.2f\n", employee.details.fixedSalary); // Print fixed salary

    return 0;
}
