// Write a C program to find out transpose of a matrix

#include<stdio.h>
int main()
{
    int m,n,sum=0;
    printf("Please enter number of rows & columns of matrix\n");
    scanf("%d %d",&m,&n);
    int a[m][n],b[n][m];
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
            b[j][i]=a[i][j];
    printf("Transpose of given matrix is \n");
    for(int i=0;i<n;i++)
    {   
        for(int j=0;j<m;j++)
            printf("%d\t",b[i][j]);
        printf("\n");
    }
}

/*Output:
Please enter number of rows & columns of matrix
2	3
Enter 6 elements
1	2	3	7	0	5
Entered matrix is
1	2	3	
7	0	5	
Transpose of given matrix is 
1	7	
2	0	
3	5*/