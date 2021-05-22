// Write a C program to find power of a number using recursion

#include<stdio.h>
int power(int a,int n)
{
    if(n)
        return a*power(a,n-1);
    return 1;
}
int main()
{
    int a,n;
    printf("Enter a number and it's power\n");
    scanf("%d %d",&a,&n);
    printf("%d raised to the power of %d is %d\n",a,n,power(a,n));
}

/*Output:
Enter a number and it's power
2	5
2 raised to the power of 5 is 32*/