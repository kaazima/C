// Write a C Program to check whether a number is positive or negative

#include<stdio.h>
int main()
{
    int n;
    printf("Please enter a number\n");
    scanf("%d",&n);
    if(n>0)
        printf("%d is positive",n);
    else if(n<0)
        printf("%d is negative",n);
    else
        printf("%d is zero i.e, neither positive nor negative",n);
}

/*Output:
Please enter a number
-452
-452 is negative*/