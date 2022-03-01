// Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a C program to calculate his gross salary

#include<stdio.h>
int main()
{
    int basic_salary, dearness_allowance, house_rent_allowance, Total_salary;
    printf("Hello, Ramesh. What's your basic salary?: ");
    scanf("%d", &basic_salary);

    dearness_allowance = basic_salary*40/100;
    house_rent_allowance = basic_salary*20/100;
    Total_salary = basic_salary + dearness_allowance + house_rent_allowance;

    printf("Your basic salary: %d \nYour dearness allowance(40percent of basic salary): %d \nYour house rent allowance(20percent of basic salary): %d \n\nYour total salary: %d\n", basic_salary, dearness_allowance, house_rent_allowance, Total_salary);
}