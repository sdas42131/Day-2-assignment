// Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees

#include<stdio.h>
int main()
{
    float tempf, tempc;
    printf("Enter the temperature of your city in Fahrenheit: ");
    scanf("%f", &tempf);
    printf("The temperature of your city in Centigrade: %f", (tempf - 32)*5/9);
}