// Write a C program to convert binary number to decimal number

#include<stdio.h>
int main()
{
    long int bin,dec=0;
    printf("Enter a binary number\n");
    scanf("%ld",&bin);
    printf("Entered binary number is %ld\n",bin);
    for(long int q=bin,r=1;q!=0;q/=10,r*=2)
        dec=dec+(q%10)*r;
    printf("Equivalent decimal number is %ld",dec);
}

/*Output:
Enter a binary number
101101
Entered binary number is 101101
Equivalent decimal number is 45*/