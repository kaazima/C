// Write a C program to convert octal number to decimal number

#include<stdio.h>
int main()
{
    long int oct,dec=0,flag=0;
    printf("Enter an octal number\n");
    scanf("%ld",&oct);
    for(long int i=oct;i!=0;i/=10)
        if(i%10 > 7)
            flag=1;
    if(flag==1)
        printf("Invalid octal number entered\n");
    else
    {
        printf("Entered octal number is %ld\n",oct);
        for(long int q=oct,r=1;q!=0;q/=10,r*=8)
            dec=dec+(q%10)*r;
        printf("Equivalent decimal number is %ld",dec);
    }
}

/*Output:
Enter an octal number
32
Entered octal number is 32
Equivalent decimal number is 26*/