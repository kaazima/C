// Write a C program for addition of two matrices

#include<stdio.h>
int main()
{
    int m,n;
    printf("Please enter number of rows & columns\n");
    scanf("%d %d",&m,&n);
    int a[m][n],b[m][n];
    printf("Enter %d elements of first matrix\n",m*n);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("Enter %d elements of second matrix\n",m*n);        
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&b[i][j]);
    for(int i=0;i<m;i++)
    {   
         for(int j=0;j<n;j++)
            printf("%d  ",a[i][j]);
        printf("\n");
    }
    printf("+\n");
    for(int i=0;i<m;i++)
    {  
         for(int j=0;j<n;j++)
            printf("%d  ",b[i][j]);
        printf("\n");
    }
    printf("=\n");
    for(int i=0;i<m;i++)
    {   
          for(int j=0;j<n;j++)
            printf("%d  ",a[i][j]+b[i][j]);
        printf("\n");
    }
}

/*Output:
Please enter number of rows & columns
2	3
Enter 6 elements of first matrix
1 2 3 4 5 6
Enter 6 elements of second matrix
5 0 6 3 8 0
1  2  3  
4  5  6  
+
5  0  6  
3  8  0  
=
6  2  9  
7  13  6*/