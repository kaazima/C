// Write a C program to convert octal number to hexadecimal number

#include<stdio.h>
int main()
{
    long int oct;
    printf("Enter an octal number\n");
    scanf("%o",&oct);
    printf("Entered octal number is %o\n",oct);
    printf("Equivalent hexadecimal number is %x",oct);
}

/*Output:
Enter an octal number
265
Entered octal number is 265
Equivalent hexadecimal number is b5*/