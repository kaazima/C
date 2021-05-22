// Write a C program to find largest among three numbers using conditional operator

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    int d=a>b? a>c?a:c : b>c?b:c ;
    printf("%d is largest among %d,%d,%d",d,a,b,c);
}

/*Output:
Enter 3 numbers
5	9	4
9 is largest among 5,9,4*/