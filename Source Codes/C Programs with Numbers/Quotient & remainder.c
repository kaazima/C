// Write a C Program to compute quotient and remainder

#include<stdio.h>
int main()
{
    int m,n;
    printf("Please enter dividend and divisor\n");
    scanf("%d %d",&m,&n);
    printf("Quotient is %d\n",m/n);
    printf("Remainder is %d",m%n);
}

/*Output:
Please enter dividend and divisor
49	9
Quotient is 5
Remainder is 4*/