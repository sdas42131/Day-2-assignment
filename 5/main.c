// The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimeters.
#include<stdio.h>
int main()
{
    float distance;
    printf("Enter the distance between your two cities (in km): ");
    scanf("%f", &distance);
    printf("The distance between your two cities (in meters): %f\n", distance*1000);
    printf("The distance between your two cities (in feets): %f\n", distance*3280.839895);
    printf("The distance between your two cities (in inches): %f\n", distance*39370.1);
    printf("The distance between your two cities (in cm): %f\n", distance*100000);
}