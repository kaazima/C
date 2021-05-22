// Write a C program to find the volume and surface area of cylinder

#include <stdio.h>
#define pi 3.14159
int main()
{
   float r,h,area,vol;
   printf("Enter radius & height of cylinder\n");
   scanf("%f %f",&r,&h);
   area=2*pi*r*(r+h);
   vol=pi*r*r*h;
   printf("Surface-area of the cylinder is %0.3f\n",area);
   printf("Volume of the cylinder is %0.3f",vol);
}

/*Output:
Enter radius & height of cylinder
3	7
Surface-area of the cylinder is 188.495
Volume of the cylinder is 197.920*/