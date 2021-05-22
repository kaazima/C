// Write a C program to find the volume and surface area of sphere

#include <stdio.h>
#define pi 3.14159
int main()
{
   float r,area,vol;
   printf("Enter radius of sphere\n");
   scanf("%f",&r);
   area=4*pi*r*r;
   vol=(4.0/3)*pi*r*r*r;
   printf("Surface-area of the sphere is %0.3f\n",area);
   printf("Volume of the sphere is %0.3f",vol);
}

/*Output:
Enter radius of sphere
4.5
Surface-area of the sphere is 254.469
Volume of the sphere is 381.703*/