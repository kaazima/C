// Write a C program to find out sum of diagonal elements of a matrix

#include<stdio.h>
int main()
{
    int m,n,sum=0;
    printf("Please enter number of rows & columns of matrix\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter %d elements\n",m*n);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("Entered matrix is\n");
    for(int i=0;i<m;i++)
    {   
        for(int j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(i==j)
                sum=sum+a[i][j];
    printf("Sum of diagonal elements of given matrix is %d",sum);
}

/*Output:
Please enter number of rows & columns of matrix
3	3
Enter 9 elements
1	2	3	4	5	6	7	0	8
Entered matrix is
1	2	3	
4	5	6	
7	0	8	
Sum of diagonal elements of given matrix is 14*/