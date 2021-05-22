// Write a C program which prints initial of any name

#include<stdio.h>
#include<string.h>
int main()
{
    char c[50];
    printf("Enter a string\n");
    gets(c);
    printf("Initial of entered string is ");
    printf("%c",c[0]);
    for(int i=0;c[i]!='\0';i++)
        if(c[i]==' ')
            printf(" %c",c[++i]);
}

/*Output:
Enter a string
Mirza Kaazima Ifrah
Initial of entered string is M K I*/