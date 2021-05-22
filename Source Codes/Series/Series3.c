// Write a C program to find out the sum of series 1^3 + 2^3 + …. + n^3

#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    sum=pow((n*(n+1))/2,2);
    printf("Sum of the series:\n");
    for(int i=1;i<n;i++)
        printf("%d³+",i);
    printf("%d³=%d",n,sum);
}

/*Output:
Enter the value of n
4
Sum of the series:
1³+2³+3³+4³=100*/