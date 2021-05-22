// Write a C program to delete an element at desired position in an array

#include<stdio.h>
int main()
{
    int n,p;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the position of element to be removed\n");
    scanf("%d",&p);
    printf("Entered array is:\n");
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
    for(int i=0;i<n;i++)
        if(a[i]==a[p-1])
        {
            for(int k=i;k<n-1;k++)
                a[k]=a[k+1];
            n--;
            break;
        }       
    printf("\nModified array is:\n");
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
}

/*Output:
Enter number of elements
5
Enter 5 elements
5	4	2	12	6
Enter the position of element to be removed
4
Entered array is:
5	4	2	12	6	
Modified array is:
5	4	2	6*/