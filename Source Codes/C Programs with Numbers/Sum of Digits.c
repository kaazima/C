// Write a C program to find out sum of digit of a given number

#include<stdio.h>
int main()
{
   int n,sum=0;
   printf("Please enter a number\n");
   scanf("%d",&n);
   for(int i=n;i!=0;i=i/10)
       sum=sum+i%10;
   printf("Sum of digits of %d is %d",n,sum);
}

/*Output:
Please enter a number
87564
Sum of digits of 87564 is 30*/