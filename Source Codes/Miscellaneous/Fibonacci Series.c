// Write a C program to print Fibonacci series of given range

#include<stdio.h>
int main()
{
    long int r,i=0,j=1,k=1;
    printf("Please enter a range\n");
    scanf("%ld",&r);
    printf("Fibonacci Series:\n0");
    if(r!=1)
        for(int c=2;c<=r;c++,k=i+j,i=j,j=k)
            printf(", %ld",k);
}

/*Output:
Please enter a range
5
Fibonacci Series:
0, 1, 1, 2, 3*/