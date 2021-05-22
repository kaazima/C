// Write a C program for division of large number (larger than long int)

#include<stdio.h>
long long int remain;
int isvalid(char ch[])
{
    for(int i=0;ch[i];i++)
        if(ch[i]<48 || ch[i]>57)
        {
            printf("Invalid integer entered\n");
            return 0;
        }
    return 1;
}
char *divide(char c[],long long int d)
{
    static char q[10000];
    long long int temp=0,j=0;
    for(int i=0;c[i];i++)
    {
        temp=temp*10+(c[i]-48);
        if(temp<d)
            q[j++]='0';
        else
        {
            q[j++]=(temp/d)+'0';
            temp=temp%d;
        }
    }
    q[j]='\0';
    remain=temp;
    return q;
}
int main()
{
    char dividend[10000],*quotient;
    long long int divisor;
    printf("Enter dividend\n");
    scanf("%s",dividend);
    if(!isvalid(dividend))
        return 0;
    printf("Enter divisor\n");
    scanf("%lld",&divisor);
    quotient=divide(dividend,divisor);
    while(*quotient)
        if(*quotient==48)
            ++quotient;
        else
            break;
    printf("Quotient obtained is %s\n",quotient);
    printf("Remainder=%lld",remain);
}

/*Output:
Enter dividend
5555555555555555555555555555555555555555555555555556
Enter divisor
5
Quotient obtained is 1111111111111111111111111111111111111111111111111111
Remainder=1*/