// Write a C program to check whether given number is even or odd

#include<stdio.h>
int main()
{
    int n;
    printf("Please enter a number\n");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d is an even number",n);
    else
        printf("%d is an odd number",n);
}

/*Output:
Please enter a number
4
4 is an even number*/