// Write a C program to perform the addition of two numbers without using + operator.

#include<stdio.h>
int main()
{
    int num1, num2, i, a;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    a = num1;
    printf("Enter the second number: ");
    scanf("%d", &num2);
    for(i = 0; i < num2; i++)
        num1++;
    printf("%d + %d = %d", a, num2, num1);


}
