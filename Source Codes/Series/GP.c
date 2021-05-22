// Write a C program to find out the sum of given Geometric Progression (G.P)

#include<stdio.h>
#include<math.h>
int main()
{
    float a,r,n,sum;
    printf("Enter number of numbers in the series\n");
    scanf("%f",&n);
    printf("Enter first number & the common ratio\n");
    scanf("%f %f",&a,&r);
    if(r==1)
    {
        printf("Sum of the GP series is %f",a*n);
        return 0;
    }
    sum=(a*(pow(r,n)-1))/(r-1);
    printf("Sum of the GP series is %f",sum);
}

/*Output:
Enter number of numbers in the series
5
Enter first number & the common ratio
8	0.5
Sum of the GP series is 15.500000*/