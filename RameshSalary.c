#include <stdio.h>
#include <conio.h>

int main()
{
    printf("Ramesh's salary caculator\n");

    int basicsalary;
    int dearness;
    int rent;
    int grossSalary;

    printf("Enter Ramesh's basic salary\n");
    scanf("%d", &basicsalary);

    dearness = basicsalary * 40/100;
    rent = basicsalary * 20/100;
    grossSalary = basicsalary + dearness + rent;

    printf("Basic Salary - %d\n", basicsalary);
    printf("Dearness Allowence - %d\n", dearness);
    printf("rent - %d\n", rent);
    printf("Gross Salary - %d\n", grossSalary);

    getch();
    return 0;
}