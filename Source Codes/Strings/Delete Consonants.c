// Write a C program to delete all the consonants from a given string

#include<stdio.h>
#include<string.h>
int main()
{
    char c[50],temp[50];
    printf("Please enter a string\n");
    gets(c);
    int j=0;
    for(int i=0;c[i]!='\0';i++)
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||
            c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
            temp[j++]=c[i];
    temp[j]='\0';
    strcpy(c,temp);
    printf("String after deleting consonents is ");
    puts(c);
}

/*Output:
Please enter a string
University
String after deleting consonents is Uiei*/