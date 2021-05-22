// Write a C Program to check whether a character is vowel or consonant

#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character\n");
    scanf("%c",&c);
    if((c>='a' && c<='z')||(c>='A' && c<='Z'))
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            printf("%c is a vowel\n",c);
        else
            printf("%c is a consonant\n",c);
    else
        printf("%c is not an alphabet",c);
}

/*Output:
Enter a character
k
k is a consonant*/