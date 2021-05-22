// Write a C program to find the area of parallelogram

#include <stdio.h>
int main()
{
   float b,h,area;
   printf("Enter base & height of parallelogram\n");
   scanf("%f %f",&b,&h);
   area=b*h;
   printf("Area of the parallelogram is %f",area);
}

/*Output:
Enter base & height of parallelogram
4	5.5
Area of the parallelogram is 22.000000*/