// Write a C program to subtract two numbers without using subtraction operator

#include<stdio.h>
int main()
{
   int n1,n2,diff;
   printf("Please enter 2 numbers\n");
   scanf("%d %d",&n1,&n2);
   diff=n1 + ~n2 + 1;   // ~n2=-n2-1
   printf("Sum of %d & %d is %d",n1,n2,diff);
}

/*Output:
Please enter 2 numbers
6	19
Sum of 6 & 19 is -13*/