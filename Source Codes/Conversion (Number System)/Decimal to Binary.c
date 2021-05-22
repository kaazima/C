// Write a C program to convert decimal number to binary number

#include<stdio.h>
int main()
{
    int n,bin[100],i=0;
    printf("Enter a decimal number\n");
    scanf("%d",&n);
    printf("Entered decimal number is %d\n",n);
    for(int q=n;q!=0;q/=2,i++)
        bin[i]=q%2;
    printf("Equivalent binary number is ");
    for(int j=i-1;j>=0;j--)
        printf("%d",bin[j]);
}

/*Output:
Enter a decimal number
12
Entered decimal number is 12
Equivalent binary number is 1100*/