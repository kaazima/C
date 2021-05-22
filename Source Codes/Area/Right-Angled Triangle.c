// Write a C program to find the area of right angled triangle

#include <stdio.h>
int main()
{
   float b,h,area;
   printf("Please enter base & height of the triangle\n");
   scanf("%f %f",&b,&h);
   area=0.5*b*h;
   printf("Area of the right-angled triangle is %f",area);
}

/*Output:
Please enter base & height of the triangle
4	3
Area of the right-angled triangle is 6.000000*/