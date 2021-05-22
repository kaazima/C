// Write a C program to generate multiplication table

#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter number of rows & columns\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Multiplication Table\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=(i+1)*(j+1);
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

/*Output:
Enter number of rows & columns
5	10
Multiplication Table
1	2	3	4	5	6	7	8	9	10	
2	4	6	8	10	12	14	16	18	20	
3	6	9	12	15	18	21	24	27	30	
4	8	12	16	20	24	28	32	36	40	
5	10	15	20	25	30	35	40	45	50*/