// Write a C program to find out L.C.M. of two numbers

#include<stdio.h>
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
   int lcm=(x*y)/m;        // m is GCD of 2 numbers
   printf("lcm of %d and %d is %d",x,y,lcm);
}

/*Output:
Enter 2 numbers
6	8
LCM of 6 & 8 is 24*/