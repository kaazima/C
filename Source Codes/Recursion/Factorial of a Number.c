// Write a C program to find factorial of a number using recursion

#include<stdio.h>
int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Factorial of %d is %d\n",n,fact(n));
}

/*Output:
Enter a number
5
Factorial of 5 is 120*/