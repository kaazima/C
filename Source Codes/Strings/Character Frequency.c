// Write a C Program to find the frequency of characters in a given string

#include<stdio.h>
#include<string.h>
int main()
{
    char c[50],f[256]={0};      // since 256 ASCII characters
    printf("Enter a string\n");
    gets(c);
    for(int i=0;c[i]!='\0';i++)
        f[c[i]]++;
    for(int i=0;i<256;i++)
        if(f[i]!=0)
            printf("Frequency of %c is %d\n",i,f[i]);
}

/*Output:
Enter a string
I am a sophomore
Frequency of   is 3
Frequency of I is 1
Frequency of a is 2
Frequency of e is 1
Frequency of h is 1
Frequency of m is 2
Frequency of o is 3
Frequency of p is 1
Frequency of r is 1
Frequency of s is 1*/