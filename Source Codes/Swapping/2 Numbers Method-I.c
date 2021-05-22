// Write a C program to swap two numbers

#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Please enter 2 numbers\n");
    scanf("%d %d",&a,&b);
    printf("Numbers before swapping are %d & %d\n",a,b);
    temp=b;
    b=a;
    a=temp;
    printf("Numbers after swapping are %d & %d\n",a,b);
}

/*Output:
Please enter 2 numbers
5	63
Numbers before swapping are 5 & 63
Numbers after swapping are 63 & 5*/