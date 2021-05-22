// Write a C program to find the length of a string using pointer

#include<stdio.h>
int str_len(char *str)          // str=&c[0]
{
    int len;
    for(len=0;*str!='\0';len++,str++);
    return len;
}
int main()
{
    char c[50];
    printf("Enter a string\n");
    gets(c);
    printf("Length of given string is %d",str_len(c));
}

/*Output:
Enter a string
Peaceful life
Length of given string is 13*/