// Write a C program to add two numbers without using addition operator

#include<stdio.h>
int main()
{
   int n1,n2,sum;
   printf("Please enter 2 numbers\n");
   scanf("%d %d",&n1,&n2);
   sum=n1 - ~n2 - 1;   // ~n2=-n2-1
   printf("Sum of %d & %d is %d",n1,n2,sum);
} 

/*Output:
Please enter 2 numbers
2
6
Sum of 2 & 6 is 8*/