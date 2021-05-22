// Write a C program for fractional decimal to binary fraction conversion

#include<stdio.h>
int main()
{
    long double d,b,df,bf=0,f_fact=0.1;
    long int di,bi=0;
    printf("Enter a fractional decimal number\n");
    scanf("%Lf",&d);
    printf("Entered fractional decimal number is %Lf\n",d);
    di=d;
    df=d-di;
    for(long int d_fact=1;di!=0;di/=2,d_fact*=10)
        bi=bi+(di%2)*d_fact;
    for(long int i=0;i<6;i++,f_fact/=10)
    {
        df=df*2;
        long int temp=df;
        bf=bf+f_fact*temp;
        if(temp==1)
            df=df-1;
    }
    b=bi+bf;
    printf("Equivalent binary fraction is %Lf",b);
}

/*Output:
Enter a fractional decimal number
15.7
Entered fractional decimal number is 15.700000
Equivalent binary fraction is 1111.101100*/