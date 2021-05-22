// Write a C program to find the area of trapezium

#include <stdio.h>
int main()
{
   float p1,p2,h,area;
   printf("Please enter 2 parallel sides & height of trapezium\n");
   scanf("%f %f %f",&p1,&p2,&h);
   area=0.5*(p1+p2)*h;
   printf("Area of the trapezium is %f",area);
}

/*Output:
Please enter 2 parallel sides & height of trapezium
3	5	6
Area of the trapezium is 24.000000*/