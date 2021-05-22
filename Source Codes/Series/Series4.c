// Write a C program to find out the sum of series 1 + 2 + 4 + 8 … to infinity

#include<stdio.h>
int main()
{
    float a=1,r=2,sum;
    if(r>1)
        sum=a/(r-1);
    else
        sum=a/(1-r);
    printf("Sum of the series:\n");
    printf("1+2+4+8+...=%f",sum);
}

/*Output:
Sum of the series:
1+2+4+8+...=1.000000*/