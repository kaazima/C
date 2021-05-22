// Write a C program to find the area of any triangle

#include <stdio.h>
#include <math.h>
int main()
{
   float a,b,c,area,s;
   printf("Please enter 3 sides of a triangle\n");
   scanf("%f %f %f",&a,&b,&c);
   s=(a+b+c)/2;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   printf("Area of the triangle is %f",area);
}

/*Output:
Please enter 3 sides of a triangle
3	4	5
Area of the triangle is 6.000000*/