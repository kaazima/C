// Write a C Program to access elements of an array using pointer

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int a[n];
    int *p=a;
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",p+i);
    printf("Entered array is \n");
    for(int i=0;i<n;i++)
        printf("%d\t",*(p+i));
}

/*Output:
Enter number of elements
4
Enter 4 elements
1	6	9	4
Entered array is 
1	6	9	4*/