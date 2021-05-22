// Write a C program to print the string from given character

#include<stdio.h>
int main()
{
    char c[50],ch;
    int flag=0,i;
    printf("Enter a string\n");
    gets(c);
    printf("Enter a character\n");
    scanf("%c",&ch);
    for(i=0;c[i]!='\0';i++)
        if(c[i]==ch)
        {
            flag=1;
            break;
        }
    if(flag==0)
        printf("Character not found\n");
    else
    {
        printf("String from %c is ",ch);
        while(c[i]!='\0')
            printf("%c",c[i++]);
    }
}

/*Output:
Enter a string
I am fine
Enter a character
f
String from f is fine*/