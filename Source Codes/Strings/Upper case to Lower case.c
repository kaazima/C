// Write a C program to convert the string from upper case to lower case

#include<stdio.h>
int main()
{
    char c[25];
    printf("Enter a string\n");
    scanf("%s",c);
    printf("Entered string is %s\n",c);
    for(int i=0;c[i]!='\0';i++)
        if(c[i]>='A' && c[i]<='Z')
            c[i]=c[i]+32;
    printf("String in lowercase is %s",c);
}

/*Output:
Enter a string
HELLO-everyone-!!!
Entered string is HELLO-everyone-!!!
String in lowercase is hello-everyone-!!!*/