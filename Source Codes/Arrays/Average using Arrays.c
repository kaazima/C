// Write a C Program to calculate average using arrays

#include<stdio.h>
int main()
{
    int n,sum=0;
    float avg;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=(float)sum/n;  
    printf("Average of entered numbers is %.2f",avg);
}

/*Output:
Enter number of elements
5
Enter 5 numbers
10	5	32	4	12
Average of entered numbers is 12.60*/