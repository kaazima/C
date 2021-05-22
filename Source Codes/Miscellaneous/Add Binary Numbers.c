// Write a C program for addition of binary numbers

#include<stdio.h>
int main()
{
    long int b1,b2,sum[50],k=0,r=0;
    printf("Enter 2 binary numbers\n");
    scanf("%ld %ld",&b1,&b2);
    for(long int i=b1,j=b2;i!=0 || j!=0;i/=10,j/=10)
    {
        int p=i%10;
        int q=j%10;
        if(!(p==0 || p==1) || !(q==0 || q==1))
        {
            printf("Invalid binary number entered\n");
            return 0;
        }
        sum[k++]=(p+q+r)%2;
        r=(p+q+r)/2;
    }
    if(r==1)
        sum[k++]=r;
    k--;
    printf("%ld + %ld = ",b1,b2);
    for(int i=k;i>=0;i--)
        printf("%d",sum[i]);
}

/*Output:
Enter 2 binary numbers
1010
101
1010 + 101 = 1111*/