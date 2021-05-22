// Write a C program for swapping of two strings

#include<stdio.h>
int main()
{
    int i;
    char a[25],b[25],c[25];
    printf("Enter a string\n");
    gets(a);
    printf("Enter another string\n");
    gets(b);
    printf("Strings before swapping are\nFirst String: ");
    puts(a);
    printf("Second string: ");
    puts(b);
    for(i=0;a[i]!='\0';i++)
        c[i]=a[i];
    c[i]='\0';
    for(i=0;b[i]!='\0';i++)
        a[i]=b[i];
    a[i]='\0';
    for(i=0;c[i]!='\0';i++)
        b[i]=c[i];
    b[i]='\0';
    printf("Strings after swapping are\nFirst String: ");
    puts(a);
    printf("Second string: ");
    puts(b);
}

/*Output:
Enter a string
God is great
Enter another string
We are humans
Strings before swapping are
First String: God is great
Second string: We are humans
Strings after swapping are
First String: We are humans
Second string: God is great*/