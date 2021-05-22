// Write a C program to find out the G.C.D/H.C.F of two numbers

#include <stdio.h>
int main()
{
   int x,y,temp;
   printf("Please enter 2 integers\n");
   scanf("%d %d",&x,&y);
   int m=x,n=y;
   while(n!=0)
   {
       temp=n;
       n=m%n;
       m=temp;
   }
   printf("GCD of %d and %d is %d",x,y,m);
}

/*Output:
Please enter 2 integers
16	28
GCD of 16 and 28 is 4*/