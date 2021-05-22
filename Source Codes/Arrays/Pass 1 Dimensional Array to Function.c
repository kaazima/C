// Write a C program which passes one-dimension array to function

#include<stdio.h>
void display(int arr[],int m)
{
    printf("Entered array elements are ");
    for(int i=0;i<m-1;i++)
        printf("%d,",arr[i]);
    printf("%d",arr[m-1]);
}
int main()
{
    int n;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    display(a,n);
}

/*Output:
Enter number of elements
5
Enter 5 elements
2	7	1	0	6
Entered array elements are 2,7,1,0,6*/