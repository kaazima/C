// Write a C program to convert octal number to decimal number

#include<stdio.h>
int main()
{
    long int n,flag=0;
    printf("Enter an octal number\n");
    scanf("%o",&n);
    printf("Entered octal number is %o\n",n);
    printf("Equivalent decimal number is %ld",n);
}

/*Output:
Enter an octal number
32
Entered octal number is 32
Equivalent decimal number is 26*/