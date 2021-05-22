// Write a C program to find out sum of digits of a number using recursion

#include<stdio.h>
int s=0;
int sum(int n)
{
    if(n)
    {
        s=s+(n%10);
        sum(n/10);
    }
    return s;
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Sum of the digits of %d is %d\n",n,sum(n));
}

/*Output:
Enter a number
125
Sum of the digits of 125 is 8*/