// Write a C program to find the determinant of a matrix

#include<stdio.h>
int main()
{
    int n,d;
    printf("Enter number of rows of the square matrix\n");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter %d numbers\n",n*n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("Entered matrix is \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    switch(n)
    {
        case 1:
            printf("Determinant of given matrix is %d\n",a[0][0]);
            break;
        case 2:
            d=a[0][0]*a[1][1] - a[0][1]*a[1][0];
            printf("Determinant of given matrix is %d\n",d);
            break;
        case 3:
            d=a[0][0]*(a[1][1]*a[2][2] - a[2][1]*a[1][2]) –
                 a[0][1]*(a[1][0]*a[2][2] - a[2][0]*a[1][2]) + 
                 a[0][2]*(a[1][0]*a[2][1] - a[2][0]*a[1][1]);
            printf("Determinant of given matrix is %d\n",d);
            break;
    }
}

/*Output:
Enter number of rows of the square matrix
3
Enter 9 numbers
1	5	0	3	0	2	1	7	2
Entered matrix is 
1	5	0	
3	0	2	
1	7	2	
Determinant of given matrix is -34*/