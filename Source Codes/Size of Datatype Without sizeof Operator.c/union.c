// Write a C program to find the size of union without using sizeof operator

#include<stdio.h>
union employee
{
    int no;
    char name[16];
    float sal;
};
int main()
{
    union employee *p;
    printf("size of the union employee is %d\n",++p);
}

/*Output:
size of the union employee is 16*/