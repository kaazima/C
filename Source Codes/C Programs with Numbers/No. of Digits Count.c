// Write a C program to count number of digits in a given number

#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=n;i>0;i/=10)
        count++;
    printf("Number of digits in %d is %d",n,count);
}

/*Output:
Enter a number
42025000
Number of digits in 42025000 is 8*/