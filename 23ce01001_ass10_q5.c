#include <stdio.h>

enum PayType {
    HOURLY = 1,
    SALARY = 2
};

union EmpDetails {
    float hourlywage;
    double fixedSalary;
    enum PayType ped;
};

struct Employee {
    int employeeID;
    char name[50];
    union EmpDetails details;
    enum PayType pe;
};

int main() {
    struct Employee employee;

    printf("Enter the employee id : ");
    scanf("%d", &employee.employeeID);
    getchar(); // Consume newline left in the input buffer

    printf("Enter employee name : ");
    gets(employee.name);

    printf("1.Hourly wage\n2.Fixed salary\n");
    int n;
    scanf("%d", &n);

    switch (n) {
        case HOURLY:
            employee.pe = HOURLY;
            employee.details.ped = HOURLY;
            printf("Enter hourly wage: ");
            scanf("%f", &employee.details.hourlywage);
            break;
        case SALARY:
            employee.pe = SALARY;
            employee.details.ped = SALARY;
            printf("Enter fixed Salary: ");
            scanf("%lf", &employee.details.fixedSalary);
            break;
        default:
            printf("Wrong choice\n");
            return 0;
    }

    if (employee.pe == HOURLY) {
        printf("Employee ID: %d\n", employee.employeeID);
        printf("Employee name: %s\n", employee.name);
        printf("Employee hourly wage: %.2f\n", employee.details.hourlywage);
    }
    if (employee.pe == SALARY) {
        printf("Employee ID: %d\n", employee.employeeID);
        printf("Employee name: %s\n", employee.name);
        printf("Employee fixed salary: %.2lf\n", employee.details.fixedSalary);
    }

    return 0;
}
