// Write a C program for multiplication of two binary numbers

#include<stdio.h>
long int add(long int bin1,long int bin2)
{
    long int sum[50],res=0,k=0,r=0;
    for(long int i=bin1,j=bin2;i!=0 || j!=0;i/=10,j/=10)
    {
        long int p=i%10;
        long int q=j%10;
        sum[k++]=(p+q+r)%2;
        r=(p+q+r)/2;
    }
    if(r==1)
        sum[k++]=r;
    k--;
    for( ;k>=0;k--)
        res=res*10+sum[k];
    return res;
}
int main()
{
    long int b1,b2,mul=0;
    printf("Enter 2 binary numbers\n");
    scanf("%ld %ld",&b1,&b2);
    printf("%ld x %ld = ",b1,b2);
    for(long int f=1;b2!=0;f=10,b2/=10)
    {
        b1=b1*f;
        if(b2%10==1)
           mul=add(b1,mul); 
    }
    printf("%ld",mul);
}

/*Output:
Enter 2 binary numbers
1010	101
1010 x 101 = 110010*/