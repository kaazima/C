// Write a C program which produces its own source code as its output

#include<stdio.h>
int main()
{
    char ch;
    FILE *fptr;
    // __FILE__ contains the location of c file it is working on
    fptr=fopen(__FILE__,"r"); 
    do
    {
        ch=fgetc(fptr);
        putchar(ch);
    }while(ch!=EOF);
    fclose(fptr);
}

/*Output:
#include<stdio.h>
int main()
{
    char ch;
    FILE *fptr;
    // __FILE__ contains the location of c file it is working on
    fptr=fopen(__FILE__,"r"); 
    do
    {
        ch=fgetc(fptr);
        putchar(ch);
    }while(ch!=EOF);
    fclose(fptr);
}*/