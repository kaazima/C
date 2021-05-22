// Write a C program for Upper triangular matrix

#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of rows of square matrix\n");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter %d elements\n",n*n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("Entered matrix is\n");
    for(int i=0;i<n;i++)
    {   
        for(int j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("Upper triangular matrix is\n");
    for(int i=0;i<n;i++)
    {   
        for(int j=0;j<n;j++)
            if(i<=j)
                printf("%d\t",a[i][j]);
            else
                printf("0\t");
        printf("\n");
    }
}

/*Output:
Enter no of rows of square matrix
3
Enter 9 elements
1 2 3 4 5 6 7 8 9
Entered matrix is
1	2	3	
4	5	6	
7	8	9	
Upper triangular matrix is
1	2	3	
0	5	6	
0	0	9*/