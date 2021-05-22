// Write a C program to find out prime factor of a given number

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        int flag=0;
        if(n%i==0)
        {
            for(int j=2;j<=i/2;j++)
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            if(flag==0)
                printf("%d is a prime factor of %d\n",i,n);
        }
    }
}

/*Output:
Enter a number
28
2 is a prime factor of 28
7 is a prime factor of 28*/