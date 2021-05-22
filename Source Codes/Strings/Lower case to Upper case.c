// Write a C program to convert the string from lower case to upper case

#include<stdio.h>
int main()
{
    char c[25];
    printf("Ener a string\n");
    scanf("%s",c);
    printf("Entered string is %s\n",c);
    for(int i=0;c[i]!='\0';i++)
        if(c[i]>='a' && c[i]<='z')
            c[i]=c[i]-32;
    printf("String in uppercase is %s",c);
}

/*Output:
Ener a string
HELLO-everyone-!!!
Entered string is HELLO-everyone-!!!
String in uppercase is HELLO-EVERYONE-!!!*/