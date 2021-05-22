// Write a C program to find out generic root of any number

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int m=n;
    while(m>9)
    {
        int sum=0;
        for(;m;m=m/10)
            sum=sum+m%10;
        m=sum;
    }
    printf("Generic root of %d is %d",n,m);
}

/*Output:
Enter a number
245
Generic root of 245 is 2*/