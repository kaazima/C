// Write a C program to print ASCII value of all characters

#include<stdio.h>
int main()
{
    for(int i=0;i<256;i++)
        printf("ASCII value of %c is %d\n",i,i);
}