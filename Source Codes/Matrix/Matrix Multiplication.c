// Write a C program for multiplication of two matrices

#include<stdio.h>
int main()
{
    int m,n,p,q;
    printf("Please enter number of rows & columns of first matrix\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter %d elements of first matrix\n",m*n);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("Please enter number of rows & columns of second matrix\n");
    scanf("%d %d",&p,&q);
    int b[p][q];
    printf("Enter %d elements of second matrix\n",p*q);        
    for(int i=0;i<p;i++)
        for(int j=0;j<q;j++)
            scanf("%d",&b[i][j]);
    if(n!=p)
    {
        printf("Multiplication of given matrices is invalid\n");
        return 0;
    }
    printf("Product of given matrices is\n");
    for(int i=0;i<m;i++)
    {   
        for(int j=0;j<q;j++)
        {
            int sum=0;
            for(int k=0;k<n;k++)
                sum=sum+(a[i][k]*b[k][j]);
            printf("%d\t",sum);
        }
        printf("\n");
    }
}

/*Output:
Please enter number of rows & columns of first matrix
3	3
Enter 9 elements of first matrix
0	5	2	6	3	1	0	1	5
Please enter number of rows & columns of second matrix
3	3
Enter 9 elements of second matrix
7	8	1	6	9	0	4	3	4
Product of given matrices is
38	51	8	
64	78	10	
26	24	20*/