// Write a C program to get factorial of a given number

#include<stdio.h>
int main()
{
    int n,f=1;
    printf("Please enter a number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        f=f*i;
    printf("Factorial of %d is %d",n,f);
}

/*Output:
Please enter a number
5
Factorial of 5 is 120*/