// Write a C program to convert octal number to binary number

#include<stdio.h>
int main()
{
    int oct,bin[100],i=0;
    printf("Enter an octal number\n");
    scanf("%o",&oct);
    printf("Entered octal number is %o\n",oct);
    for(int q=oct;q!=0;q/=2,i++)            //Octal to Decimal
        bin[i]=q%2;                         //Decimal to Binary
    printf("Equivalent binary number is ");
    for(int j=i-1;j>=0;j--)
        printf("%d",bin[j]);
}

/*Output:
Enter an octal number
425
Equivalent binary number is 
100010101*/