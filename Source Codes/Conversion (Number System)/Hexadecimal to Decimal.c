// Write a C program to convert hexadecimal number to decimal number

#include<stdio.h>
int main()
{
    long int hex;
    printf("Enter a hexadecimal number\n");
    scanf("%x",&hex);
    printf("Entered hexadecimal number is %x\n",hex);
    printf("Equivalent decimal number is %ld",hex);
}

/*Output:
Enter a hexadecimal number
2d
Entered hexadecimal number is 2d
Equivalent decimal number is 45*/