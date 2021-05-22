// Write a C program to check whether given number is palindrome number or not

#include<stdio.h>
int main()
{
    int n,reverse=0;
    printf("Please enter a number\n");
    scanf("%d",&n);
    int t=n;
    while(t)
    {
       reverse=reverse*10+(t%10);
       t/=10;
    }
    if(n==reverse)
        printf("%d is a Palindrome",n);
    else
        printf("%d is not a Palindrome",n);
}

/*
Output:
Please enter a number
34543
34543 is a Palindrome*/