// Write a C program to insert an element at desired position in an array

#include<stdio.h>
int main()
{
    int n,pos,num;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the position and the number to be inserted\n");
    scanf("%d %d",&pos,&num);
    printf("Entered array is:\n");
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
    n++;
    for(int i=n-1;i>=pos;i--)
        a[i]=a[i-1];
    a[pos-1]=num;
    printf("\nModified array is:\n");
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
}

/*Output:
Enter number of elements
5
Enter 5 elements
2	6	4	3	8
Enter the position and the number to be inserted
2	0
Entered array is:
2	6	4	3	8	
Modified array is:
2	0	6	4	3	8*/