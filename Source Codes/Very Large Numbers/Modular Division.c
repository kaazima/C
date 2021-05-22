// Write a C code for modular division of large number

#include<stdio.h>
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
long long int mod_divide(char c[],long long int d)
{
    long long int temp=0;
    for(int i=0;c[i];i++)
    {
        temp=temp*10+(c[i]-48);
        if(temp>=d)
            temp=temp%d;
    }
    return temp;
}
int main()
{
    char dividend[10000];
    long long int divisor,remain;
    printf("Enter dividend\n");
    scanf("%s",dividend);
    if(!isvalid(dividend))
        return 0;
    printf("Enter divisor\n");
    scanf("%lld",&divisor);
    remain=mod_divide(dividend,divisor);
    printf("Modular Division\n");
    printf("%s %% %lld = %lld",dividend,divisor,remain);
}

/*Output:
Enter dividend
254934228465585789654555545525
Enter divisor
10
Modular Division
254934228465585789654555545525 % 10 = 5*/