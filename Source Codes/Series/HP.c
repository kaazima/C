// Write a C program to find out the sum of given Harmonic Progression (H.P)

#include<stdio.h>
int main()
{
    int n,a,d;
    printf("Enter the number of numbers in the series\n");
    scanf("%d",&n);
    printf("Enter reciprocal of the first term of the HP series\n");
    scanf("%d",&a);
    printf("Enter the difference between two consecutive reciprocals\n");
    scanf("%d",&d);
    printf("Sum of the HP series:\n");
    float sum=1.0/a;
    printf("(1/%d)",a);
    for(int i=1;i<n;i++)
    {
        int m=a+i*d;
        sum+=1.0/m;
        printf("+(1/%d)",m);
    }
    printf("=%.2f",sum);
}

/*Output:
Enter the number of numbers in the series
6
Enter reciprocal of the first term of the HP series
2
Enter the difference between two consecutive reciprocals
1
Sum of the HP series:
(1/2)+(1/3)+(1/4)+(1/5)+(1/6)+(1/7)=1.59*/