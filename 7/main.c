// Write a C program Check whether an alphabet is a vowel or consonant

#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter your alphabet to check if it's a vowel or consonent: ");
    scanf("%c", &alphabet);

    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u'|| alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
        printf("%c is a vowel.", alphabet);
    if (alphabet < 'a' || alphabet > 'z')
        printf("Please enter a valid alphabet. Not any special charecters.");
    else
        printf("%c is a consonant.", alphabet);
}