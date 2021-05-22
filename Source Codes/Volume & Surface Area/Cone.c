// Write a C program to find the surface area and volume of a cone

#include <stdio.h>
#include<math.h>
#define pi 3.14159
int main()
{
   float r,h,area,vol;
   printf("Enter radius & height of cone\n");
   scanf("%f %f",&r,&h);
   area=pi*r*(r+sqrt(r*r+h*h));
   vol=(1.0/3)*pi*r*r*h;
   printf("Surface-area of the cone is %0.3f\n",area);
   printf("Volume of the cone is %0.3f",vol);
}

/*Output:
Enter radius & height of cone
2	5
Surface-area of the cone is 46.402
Volume of the cone is 20.944*/