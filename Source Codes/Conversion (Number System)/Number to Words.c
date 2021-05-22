// Write a C program to convert currency or number in words

#include<stdio.h>
#include<string.h>
char *num_words(long int n,char s[50])        // if n is 1 or 2 digit number
{
    char *one[]={ "", "one ", "two ", "three ", "four ", "five ", "six ", "seven ","eight ", "nine ","ten ", "eleven ", "twelve ", "thirteen ", "fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen "};
    char *ten[]={ "", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety "};
    char c[900]={""};
    char *ch=c;
    if(n>19)
    {
        strcat(ch,ten[n/10]);
        strcat(ch,one[n%10]);
    }
    else
        strcat(ch,one[n]);
    if(n)                                       //if n is non zero
        strcat(ch,s);
    return ch;
}
char *convert_words(long int n)
{
    char ch[900]={""};
    char *c=ch;
    strcat(c,num_words((n/10000000),"crore "));
    strcat(c,num_words(((n/100000)%100),"lakh "));
    strcat(c,num_words(((n/1000)%100),"thousand "));
    strcat(c,num_words(((n/100)%10),"hundred "));
    if(n>100 && n%100)
        strcat(c,"and ");
    strcat(c,num_words((n%100),""));
    return c;
}
int main()
{
    long int n;
    printf("Enter currency or number\n");
    scanf("%ld",&n);
    printf("Currency in words is\n%s",convert_words(n));
}

/*Output:
Enter currency or number
258700386
Currency in words is
twenty five crore eighty seven lakh three hundred and eighty six*/