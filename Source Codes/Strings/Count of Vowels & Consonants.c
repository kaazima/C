// Write a C program to count the number of vowels, consonants

#include<stdio.h>
#include<string.h>
int main()
{
    char c[50];
    int vc=0,cc=0;
    printf("Enter a string\n");
    gets(c);
    for(int i=0;c[i]!='\0';i++)
        if((c[i]>='a' && c[i]<='z')||(c[i]>='A' && c[i]<='Z'))
            if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||
                c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
                vc++;
            else
                cc++;
    printf("Number of vowels is %d\nNumber of consonants is %d",vc,cc);
}

/*Output:
Enter a string
What a code!!!
Number of vowels is 4
Number of consonants is 5*/