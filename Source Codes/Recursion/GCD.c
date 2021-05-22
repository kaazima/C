// Write a C program to find GCD of  two numbers using recursion

#include<stdio.h>
int gcd(int m,int n)
{
    if(n==0)
        return m;
    return gcd(n,m%n);
}
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("GCD of %d & %d is %d\n",a,b,gcd(a,b));
}

/*Output:
Enter two numbers
8
2
GCD of 8 & 2 is 2*/