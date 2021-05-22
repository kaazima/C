// Write a C program to find largest among three numbers using binary minus operator

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a-b>0 && a-c>0)
        printf("%d is largest among %d,%d & %d",a,a,b,c);
    else if(b-c>0)
        printf("%d is largest among %d,%d & %d",b,a,b,c);
    else
        printf("%d is largest among %d,%d & %d",c,a,b,c);
}

/*Output:
Enter 3 numbers
8	6	4
8 is largest among 8,6 & 4*/