// Write a C program to reverse any number using recursion

#include<stdio.h>
int r=0;
int rev(int n)
{
    if(n)
    {
        r=r*10+n%10;
        rev(n/10);
    }
    return r;
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Reverse of %d is %d\n",n,rev(n));
}

/*Output:
Enter a number
54231
Reverse of 54231 is 13245*/