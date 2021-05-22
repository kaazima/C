// Write a C program to find the area of rectangle

#include <stdio.h>
int main()
{
   float l,b,area;
   printf("Please enter length & breadth of the rectangle\n");
   scanf("%f %f",&l,&b);
   area=l*b;
   printf("Area of the rectangle is %f",area);
}

/*Output:
Please enter length & breadth of the rectangle
2.5	5
Area of the rectangle is 12.500000*/