// Write a C program to convert a string to ASCII

#include<stdio.h>
#include<string.h>
int main()
{
    char c[50];
    printf("Enter a string\n");
    gets(c);
    printf("ASCII values of the characters of entered string are ");
    for(int i=0;c[i]!='\0';i++)
        printf("%d ",c[i]);
}

/*Output:
Enter a string
Hello
ASCII values of the characters of entered string are 72 101 108 108 111*/