// Write a C program to find out the sum of series 1^2 + 2^2 + …. + n^2

#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    sum=(n*(n+1)*(2*n+1))/6;
    printf("Sum of the series:\n");
    for(int i=1;i<n;i++)
        printf("%d²+",i);
    printf("%d²=%d",n,sum);
}

/*Output:
Enter the value of n
4
Sum of the series:
1²+2²+3²+4²=30*/