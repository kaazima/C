// Write a C Program to multiply two matrices by passing matrix to a function

#include<stdio.h>
void scan(int d[50][50],int x,int y)
{
    printf("Enter %d elements\n",x*y);
    for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)
            scanf("%d",&d[i][j]);
}
void multiply(int a[50][50],int b[50][50],int c[50][50],int m,int n,int q)
{
    for(int i=0;i<m;i++)
    {   
        for(int j=0;j<q;j++)
        {
            int sum=0;
            for(int k=0;k<n;k++)
                sum=sum+(a[i][k]*b[k][j]);
            c[i][j]=sum;
        }
    }
}
void print(int d[50][50],int x,int y)
{
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
            printf("%d\t",d[i][j]);
        printf("\n");
    }
}
int main()
{
    int m,n,p,q;
    printf("Enter number of rows and columns of first matrix\n");
    scanf("%d %d",&m,&n);
    printf("Enter number of rows and columns of second matrix\n");
    scanf("%d %d",&p,&q);
    if(n!=p)
    {
        printf("Columns of 1st matrix ≠ Rows of 2nd matrix\nMultiplication is invalid\n");
        return 0;
    }
    int a[50][50],b[50][50],c[50][50];
    scan(a,m,n);
    scan(b,p,q);
    multiply(a,b,c,m,n,q);
    printf("\n");
    print(a,m,n);
    printf("x\n");
    print(b,p,q);
    printf("=\n");
    print(c,m,q);
}

/*Output:
Enter number of rows and columns of first matrix
2	3
Enter number of rows and columns of second matrix
3	2
Enter 6 elements
1	5	0	3	2	4	
Enter 6 elements
3	8	1	2	0	4

1	5	0	
3	2	4	
x
3	8	
1	2	
0	4	
=
8	18	
11	44*/