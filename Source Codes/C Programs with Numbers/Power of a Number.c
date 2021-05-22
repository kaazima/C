// Write a C program to find out power of a given number

#include<stdio.h>
int main()
{
   int n,p,result=1;
   printf("Please enter a number and power\n");
   scanf("%d %d",&n,&p);
   for(int i=1;i<=p;i++)
       result*=n;
   printf("%d to the power of %d is %d",n,p,result);
}

/*Output:
Please enter a number and power
5	4
5 to the power of 4 is 625*/