// Write a C program for concatenation two strings

#include<stdio.h>
#include<string.h>
int main()
{
    char c[50],ch[50];
    int i;
    printf("Enter a string\n");
    gets(c);
    printf("Enter second string\n");
    gets(ch);
    printf("Strings before concatenation are\n");
    puts(c);
    puts(ch);
    for(i=0;c[i]!='\0';i++);
    for(int j=0;ch[j]!='\0';j++)
        c[i++]=ch[j];
    c[i]='\0';
    printf("String after concatenation is ");
    puts(c);
}

/*Output:
Enter a string
sow a habit, 
Enter second string
reap a character
Strings before concatenation are
sow a habit, 
reap a character
String after concatenation is sow a habit, reap a character*/