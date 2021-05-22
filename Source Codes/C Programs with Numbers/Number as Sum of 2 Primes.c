// Write a C Program to check whether a number can be expressed as sum of two prime numbers

#include<stdio.h>
int isprime(int num)
{
    for(int i=2;i<=num/2;i++)
        if(num%i==0)
            return 0;
    return 1;
}
int main()
{
    int flag=0,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
        if(isprime(i) && isprime(n-i))
        {
            printf("%d=%d+%d\n",n,i,n-i);
            flag=1;
        }
    if(flag)
        printf("%d can be expressed as sum of 2 prime numbers\n",n);
    else
        printf("%d can not be expressed as sum of 2 prime numbers\n",n);
}

/*eliOutput:
Enter a number
20
20=3+17
20=7+13
20 can be expressed as sum of 2 prime numbers*/