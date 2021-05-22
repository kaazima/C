// Write a C program to find out second largest and second smallest element of an unsorted array

#include<stdio.h>
#include<limits.h>
int main()
{
    int n,max1,max2,min1,min2;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    max1=max2=INT_MIN;
    min1=min2=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2 && a[i]<max1)
            max2=a[i];
        if(a[i]<min1)
        {
            min2=min1;
            min1=a[i];
        }
        else if(a[i]<min2 && a[i]>min1)
            min2=a[i];
    }
    if(max2==INT_MIN)
        printf("Second largest element does not exist\n");
    else
        printf("Second largest element of entered array is %d\n",max2);
    if(min2==INT_MAX)
        printf("Second smallest element does not exist\n");
    else
        printf("Second smallest element of entered array is %d\n",min2);
}

/*Output:
Enter number of elements
5
Enter 5 elements
78	25	4	6	13
Second largest element of entered array is 25
Second smallest element of entered array is 6*/