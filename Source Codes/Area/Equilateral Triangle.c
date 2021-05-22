// Write a C program to find the area of equilateral triangle

#include <stdio.h>
#include <math.h>
int main()
{
   float a,area;
   printf("Please enter side of the triangle\n");
   scanf("%f",&a);
   area=(sqrt(3)/4)*(a*a);
   printf("Area of the equilateral triangle is %f",area);
}

/*Output:
Please enter side of the triangle
3
Area of the equilateral triangle is 3.897114*/