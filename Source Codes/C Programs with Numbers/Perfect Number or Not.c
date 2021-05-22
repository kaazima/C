// Write a C program to check given number is perfect number or not

#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++)
        if(n%i==0)
            sum=sum+i;
    if(sum==n)
        printf("%d is a perfect number",n);
    else
        printf("%d is a not perfect number",n);
}

/*Output:
Enter a number
28
28 is a perfect number*/