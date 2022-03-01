// Write a C program to check whether a number is even or odd using ternary operator.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    (num%2 == 0) ? printf("%d is an even number.", num) : printf("%d is a odd number.", num);
}