// Write a C program to get last two digits of year

#include<stdio.h>
int main()
{
    int y;
    printf("Please enter a year\n");
    scanf("%d",&y);
    printf("Last 2 digits of %d are %02d",y,y%100);
}

/*Output:
Please enter a year
2019
Last 2 digits of 2019 are 19*/