// Write a C program for swapping of two arrays

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter number of array elements\n");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    printf("Enter %d numbers\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter %d numbers\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    printf("Arrays before swapping are\nFirst array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
     printf("\nSecond array: ");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
    for(i=0;i<n;i++)
    {
        c[i]=b[i];
        b[i]=a[i];
        a[i]=c[i];
    }
    printf("\nArrays after swapping are\nFirst array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nSecond array: ");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
}

/*Output:
Enter number of array elements
4
Enter 4 numbers
1 2 3 4
Enter 4 numbers
5 6 7 8
Arrays before swapping are
First array: 1 2 3 4 
Second array: 5 6 7 8 
Arrays after swapping are
First array: 5 6 7 8 
Second array: 1 2 3 4 */