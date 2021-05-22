// Write a C program to swap two numbers without using third variable

#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Please enter 2 numbers\n");
    scanf("%d %d",&a,&b);
    printf("Numbers before swapping are %d & %d\n",a,b);
    a = a + ~b + 1;       // b=-~b-1
    b = a - ~b -1;
    a = b + ~a +1;
    printf("Numbers after swapping are %d & %d\n",a,b);
}

/*Output:
Please enter 2 numbers
8	6
Numbers before swapping are 8 & 6
Numbers after swapping are 6 & 8*/