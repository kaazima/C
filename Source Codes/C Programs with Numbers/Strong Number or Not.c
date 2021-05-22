// Write a C program to check given number is strong number or not

#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int m=n;m;m=m/10)
    {
        int digit=m%10,fact=1;
        if(digit!=0 && digit!=1)
            for(int j=2;j<=digit;j++)
                fact=fact*j;
        sum=sum+fact;
    }
    if(sum==n)
        printf("%d is a Strong number",n);
    else
        printf("%d is not a Strong number",n);
}

/*Output:
Enter a number
10
10 is not a Strong number*/