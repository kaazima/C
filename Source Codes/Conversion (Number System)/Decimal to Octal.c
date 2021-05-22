// Write a C program to convert decimal number to octal number

#include<stdio.h>
int main()
{
    long int dec;
    printf("Enter a decimal number\n");
    scanf("%ld",&dec);
    printf("Entered decimal number is %ld\n",dec);
    printf("Equivalent octal number is %o",dec);
}

/*Output:
Enter a decimal number
26
Entered decimal number is 26
Equivalent octal number is 32*/