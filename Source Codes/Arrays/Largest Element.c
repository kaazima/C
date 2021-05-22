// Write a C program to find out largest element of an array

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int max=a[0];
    for(int i=0;i<n;i++)
        if(a[i]>max)
            max=a[i];
    printf("Largest element of entered array is %d",max);
}

/*Output:
Enter number of elements
5
Enter 5 elements
5	7	68	1	54
Largest element of entered array is 68*/