// Write a C program to find factorial of 100 or very large numbers

#include<stdio.h>
int main()
{
    int a[300],t,n,count=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Factorial of %lld is ",n);
    a[0]=1;
    for(;n>=2;n--)
    {
        t=0;
        for(int i=0;i<=count;i++)
        {
            t=a[i]*n+t;
            a[i]=t%10;
            t=t/10;
        }
        for(;t>0;t=t/10)
            a[++count]=t%10;
    }
    for(int i=count;i>=0;i--)
        printf("%d",a[i]);
}

/*Output:
Enter a number
105
Factorial of 105 is 1081396758240290900504101305800329649720646107774902579144176636573226531909905153326984536526808240339776398934872029657993872907813436816097280000000000000000000000000*/