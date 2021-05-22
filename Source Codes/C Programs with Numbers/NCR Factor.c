// Write a C program to find out NCR factor of a given number

#include <stdio.h>
int main()
{
    int n,r,i,j;
    printf("Enter 2 numbers\n");
    scanf("%d %d",&n,&r);
    int a[n+1][n+1];
    for(i=0;i<=n;i++) 
        for(j=0;j<=n;j++) 
            a[i][j]=0;
    for(i=0;i<n;i++)
        a[i][0]=1;                
    a[0][1]=1;
    for(i=1;i<n;i++)
        for(j=1;j<=i+1;j++)
            a[i][j] = (a[i-1][j-1] + a[i-1][j]);
    printf("c(%d,%d) is %d",n,r,a[n-1][r]);
}

/*Output:
Enter 2 numbers
5	2
c(5,2) is 10*/