// Write a C program to convert decimal number to hexadecimal number

#include<stdio.h>
int main()
{
    long int dec;
    printf("Enter a decimal number\n");
    scanf("%ld",&dec);
    printf("Entered decimal number is %ld\n",dec);
    printf("Equivalent hexadecimal number is %x",dec);
}

/*Output:
Enter a decimal number
46
Entered decimal number is 46
Equivalent hexadecimal number is 2e*/