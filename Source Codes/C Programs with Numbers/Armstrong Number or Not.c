// Write a C program to check given number is Armstrong number or not

#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int m=n;m;m=m/10)
    {
        int t=m%10;
        sum=sum+t*t*t;
    }
    if(sum==n)
        printf("%d is an Armstrong number",n);
    else
        printf("%d is not an Armstrong number",n);
}

/*Output:
Enter a number
153
153 is an Armstrong number*/