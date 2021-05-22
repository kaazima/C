// Write a C program to find the area of rhombus

#include <stdio.h>
int main()
{
   float d1,d2,area;
   printf("Enter 2 diagonals of rhombus\n");
   scanf("%f %f",&d1,&d2);
   area=0.5*d1*d2;
   printf("Area of the rhombus is %f",area);
}

/*Output:
Enter 2 diagonals of rhombus
5	7
Area of the rhombus is 17.500000*/