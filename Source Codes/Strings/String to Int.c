// Write a C program to convert string to int

#include <stdio.h>
int main()
{
    int n=0,flag=0;
    char s[10];
    printf("Enter a number as a string\n");
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++)
    {    
        if((s[i]<'0' || s[i]>'9') && (s[0]!='-'))
        {
            printf("Can't convert it to integer\n");
            flag=1;
            break;
        }
        else if(s[i]!='-')
           n=n*10 + (s[i]-'0');
    }
    if(s[0]=='-')
        n=n*-1;
    if(flag==0)
    {
        printf("Entered string is %s\n",s);
        printf("Equivalent integer is %d",n);
    }
}

/*Output:
Enter a number as a string
-654
Entered string is -654
Equivalent integer is -654*/