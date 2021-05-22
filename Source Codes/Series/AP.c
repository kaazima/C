// Write a C program to find out the sum of given Arithmetic Progression (A.P)

#include<stdio.h>
int main()
{
    int a,d,n,sum;
    printf("Enter number of numbers in the series\n");
    scanf("%d",&n);
    printf("Enter first number & the common difference\n");
    scanf("%d %d",&a,&d);
    sum=(n*(2*a+(n-1)*d))/2;
    printf("Sum of the AP series is %d",sum);
}

/*Output:
Enter number of numbers in the series
4
Enter first number & the common difference
1	4
Sum of the AP series is 28*/