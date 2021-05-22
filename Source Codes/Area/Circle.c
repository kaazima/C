// Write a C program to find the area of circle

#include <stdio.h>
#define pi 3.14159
int main()
{
   float r,area;
   printf("Please enter radius of the circle\n");
   scanf("%f",&r);
   area=pi*r*r;
   printf("Area of the circle is %f",area);
}
    
/*Output:
Please enter radius of the circle
3
Area of the circle is 28.274309*/