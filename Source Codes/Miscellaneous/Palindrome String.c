// Write a C program to check whether given string is palindrome or not

#include<stdio.h>
#include<string.h>
int main()
{
    char s[15],i,j,flag=0;
    printf("Please enter a string\n");
    scanf("%s",s);
    int l=strlen(s);
    for(i=l-1,j=0;j<=i/2;j++,i--)
        if(s[i]!=s[j])
        {
            flag=1;
            break;
        }
    if(flag==1)
        printf("%s is not a Palindrome",s);
    else
        printf("%s is a Palindrome",s);
}

/*Output:
1.	Please enter a string                                    
madam
madam is a Palindrome

2.	Please enter a string
sir
sir is not a Palindrome*/