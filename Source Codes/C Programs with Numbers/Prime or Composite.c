// Write a C program to check whether given number is prime number or not

#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Please enter a number\n");
    scanf("%d",&n);
    for(int i=2;i<n/2;i++)
        if(n%i==0)
        {
            c++;
            break;
        }
    if(n==1)
        printf("1 is neither a prime number nor a composite number\n");
    else if(c==0)
        printf("%d is a prime number\n",n);
    else
        printf("%d is a composite number\n",n);
}

/*Output:
Please enter a number
2
2 is a prime number*/