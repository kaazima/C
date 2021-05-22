// Write a C program to reverse a string

#include<stdio.h>
#include<string.h>
int main()
{
    char c[50],rev[50];
    int i,j;
    printf("Enter a string\n");
    gets(c);
    printf("String before reversing is ");
    puts(c);
    for(i=0;c[i]!='\0';i++);
    for(j=0;i>0;j++)
        rev[j]=c[--i];
    rev[j]='\0';
    printf("String after reversing is ");
    puts(rev);
}

/*Output:
Enter a string
nice to meet you
String before reversing is nice to meet you
String after reversing is uoy teem ot ecin*/