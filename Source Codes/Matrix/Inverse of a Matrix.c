// Write a C program to find inverse of a matrix

#include<stdio.h>
int main()
{
    int a[3][3];
    printf("Enter 9 numbers\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("Entered matrix is \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("Inverse of entered matrix is \n");
    float det=a[0][0]*(a[1][1]*a[2][2] - a[2][1]*a[1][2]) – 
                   a[0][1]*(a[1][0]*a[2][2] - a[2][0]*a[1][2]) + 
                   a[0][2]*(a[1][0]*a[2][1] - a[2][0]*a[1][1]);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%.2f\t",(a[(i+1)%3][(j+1)%3]*a[(i+2)%3][(j+2)%3] – 
                        a[(i+1)%3][(j+2)%3]*a[(i+2)%3][(j+1)%3])/det);
        printf("\n");
    }
}

/*Output:
Enter 9 numbers
1	0	8	6	0	2	1	1	3
Entered matrix is 
1	0	8	
6	0	2	
1	1	3	
Inverse of entered matrix is 
-0.04	-0.35	0.13	
0.17	-0.11	-0.02	
0.00	1.00	0.00*/