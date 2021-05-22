// Write a C program to find largest and smallest number in an array

#include<stdio.h>
int main()
{
    int n,max,min;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("Largest element of entered array is %d\n",max);
    printf("Smallest element of entered array is %d\n",min);
}

/*Output:
Enter number of elements
5
Enter 5 elements
5	8	4	0	2
Largest element of entered array is 8
Smallest element of entered array is 0*/