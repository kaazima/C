// Write a C program to find the size of structure without using sizeof operator

#include<stdio.h>
struct employee
{
    int no;
    char name[8];
    float sal;
};
int main()
{
    struct employee *p;
    printf("size of the structure employee is %d\n",++p);
}

/*Output:
size of the structure employee is 16*/