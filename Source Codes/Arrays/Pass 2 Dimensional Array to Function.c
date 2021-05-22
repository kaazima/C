// Write a C program which passes two-dimension array to function

#include<stdio.h>
void scan(int d[50][50],int x,int y)
{
    printf("Enter %d elements\n",x*y);
    for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)
            scanf("%d",&d[i][j]);
}
void print(int d[50][50],int x,int y)
{
    printf("Entered array is \n");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
            printf("%d\t",d[i][j]);
        printf("\n");
    }
}
int main()
{
    int m,n;
    printf("Enter number of rows and columns of matrix\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    scan(a,m,n);
    print(a,m,n);
}

/*Output:
Enter number of rows and columns of matrix
2	3
Enter 6 elements
1	5	7	0	6	3
Entered array is 
1	5	7	
0	6	3*/