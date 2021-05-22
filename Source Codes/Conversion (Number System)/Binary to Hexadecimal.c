// Write a C program to convert binary number to hexadecimal number

#include<stdio.h>
int main()
{
    long int bin,dec=0;
    printf("Enter a binary number\n");
    scanf("%ld",&bin);
    printf("Entered binary number is %ld\n",bin);
    for(long int q=bin,r=1;q!=0;q/=10,r*=2)             //Binary to Decimal
        dec=dec+(q%10)*r;                               
    printf("Equivalent hexadecimal number is %x",dec);  //Decimal to Hexadecimal
}

/*Output:
Enter a binary number
10101
Entered binary number is 10101
Equivalent hexadecimal number is 15*/