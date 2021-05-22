// Write a C program to find the volume and surface area of cube

#include <stdio.h>
int main()
{
   float a,area,vol;
   printf("Enter side-length of cube\n");
   scanf("%f",&a);
   area=6*a*a;
   vol=a*a*a;
   printf("Surface-area of the cube is %0.3f\nVolume of the cube is %0.3f",area,vol);
}

/*Output:
Enter side-length of cube
5.5
Surface-area of the cube is 181.500
Volume of the cube is 166.375*/