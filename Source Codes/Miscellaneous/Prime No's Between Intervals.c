// Write a C Program to display prime numbers between intervals using function

#include <stdio.h>
int isprime(int num)
{
    for(int i=2;i<=num/2;i++)
        if(num%i==0)
            return 0;
    return 1;
}
void prime(int lower,int upper)
{
    printf("Prime numbers between %d & %d are\n",lower,upper);
    for(int i=lower;i<=upper;i++)
        if(isprime(i))
            printf("%d\t",i);
}
int main()
{
    int ll,ul;
    printf("Enter lower limit & upper limit\n");
    scanf("%d %d",&ll,&ul);
    prime(ll,ul);
}

/*Output:
Enter lower limit & upper limit
12	45
Prime numbers between 12 & 45 are
13	17	19	23	29	31	37	41	43*/