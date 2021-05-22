// Write a C program to find the perimeter of a circle, rectangle and triangle

#include <stdio.h>
#define pi 3.14159
int main()
{
   float r,l,b,x,y,z;
   printf("Enter radius of circle\n");
   scanf("%f",&r);
   printf("Enter length & breadth of rectangle\n");
   scanf("%f %f",&l,&b);
   printf("Enter sides of triangle\n");
   scanf("%f %f %f",&x,&y,&z);
   printf("Perimeter of circle is %0.3f\n",2*pi*r);
   printf("Perimeter of rectangle is %0.3f\n",2*(l+b));
   printf("Perimeter of triangle is %0.3f",x+y+z);
}

/*Output:
Enter radius of circle
3
Enter length & breadth of rectangle
2	5
Enter sides of triangle
2.1	3	4.6
Perimeter of circle is 25.133
Perimeter of rectangle is 14.000
Perimeter of triangle is 9.700*/