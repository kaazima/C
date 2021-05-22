// Write a C Program to check whether a character is an alphabet or not

#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character\n");
    scanf("%c",&c);
    if((c>='a' && c<='z')||(c>='A' && c<='Z'))
        printf("%c is an alphabet\n",c);
    else
        printf("%c is not an alphabet",c);
}

/*Output:
8
Enter a character
8 is not an alphabet*/