// Write a C Program to check leap year

#include<stdio.h>
int main()
{
    int y;
    printf("Please enter a year\n");
    scanf("%d",&y);
    if(y%400==0)
        printf("%d is a leap year\n",y);
    else if(y%100==0)
        printf("%d is not a leap year\n",y);
    else if(y%4==0)
        printf("%d is a leap year\n",y);
    else
        printf("%d is not a leap year\n",y);
}

/*Output:
Please enter a year
2016
2016 is a leap year*/