// Write a C program to sort the characters of a given string

#include<stdio.h>
#include<string.h>
int main()
{
    char c[50],temp;
    printf("Enter a string\n");
    gets(c);
    int n=strlen(c);
    printf("String before sorting is ");
    puts(c);
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
    printf("String after sorting is ");
    puts(c);
}

/*Output:
Enter a string
fabulous
String before sorting is fabulous
String after sorting is abflosuu*/