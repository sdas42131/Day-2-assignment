// Write a C program to find the roots of a Quadratic equation. (using if else statement)

#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, r1, r2, R1, R2, d;
    printf("\nFormat of a quadratic equation is: ax^2 + bx + c = 0\n");

    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of a: ");
    scanf("%f", &b);
    printf("Enter the value of a: ");
    scanf("%f", &c);

    d = b*b - 4*a*c;

    // printf("%f", d);
    r1 = -b + sqrt(d);
    R1 = r1/2*a;

    r2 = (-b - sqrt(d));
    R2 = r2/2*a;

    if(d > 0)
        printf("The roots are: %f and %f", R1, R2);
    
    if(d == 0)
        printf("\nRoots are equal.\nThe roots are: %f and %f", R1, R2);

    if(d < 0)
        printf("Roots of the equation are imaginary.");

}