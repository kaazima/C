// Write a C program to find out the sum of series 1 + 2 + ….  + n

#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    printf("Sum of the series:\n");
    for(int i=1;i<n;i++)
        printf("%d+",i);
    printf("%d=%d",n,sum);
}

/*Output:
Enter the value of n
5
Sum of the series:
1+2+3+4+5=15*/