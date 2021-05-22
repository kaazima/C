// Write a C Program to reverse a string using recursion

#include<stdio.h>
int r=0;
void rev()
{
    char ch;
    if((ch=getchar())!='\n')
    {
        rev();
        putchar(ch);
    }
}
int main()
{
    printf("Enter a string : ");
    rev();
}

/*Output:
Enter a string : nice to meet you
uoy teem ot ecin*/