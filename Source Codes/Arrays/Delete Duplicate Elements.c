// Write a C program which deletes the duplicate element of an array

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
    printf("Entered array is:\n");
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;)
            if(a[i]==a[j])
            {
                for(int k=j;k<n-1;k++)
                    a[k]=a[k+1];
                n--;
            }
            else
                j++;
    printf("\nModified array is:\n");
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
}

/*Output:
Enter number of elements
8
Enter 8 elements
4	4	2	5	3	5	5	3
Entered array is:
4	4	2	5	3	5	5	3	
Modified array is:
4	2	5	3*/