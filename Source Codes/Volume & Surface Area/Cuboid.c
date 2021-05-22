// Write a C program to find the volume and surface area of cuboids

#include <stdio.h>
int main()
{
   float l,b,h,area,vol;
   printf("Enter length, breadth & height of cuboid\n");
   scanf("%f %f %f",&l,&b,&h);
   area=2*(l*b+b*h+h*l);
   vol=l*b*h;
   printf("Surface-area of the cuboid is %0.3f\n",area);
   printf("Volume of the cuboid is %0.3f",vol);
}

/*Output:
Enter length, breadth & height of cuboid
2	5	3
Surface-area of the cuboid is 62.000
Volume of the cuboid is 30.000*/