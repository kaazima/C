// Write a C program to convert roman to decimal number

#include<stdio.h>
int str_len(char c[])
{
    int count=0;
    for(int i=0;c[i]!='\0';i++)
        count++;
    return count;
}
int main()
{
    char rom[50];
    printf("Enter a roman number\n");
    scanf("%s",rom);
    int a[50],len=str_len(rom);
    for(int i=0;i<len;i++)
    {
        if(rom[i]=='I')
            a[i]=1;
        else if(rom[i]=='V')
            a[i]=5;
        else if(rom[i]=='X')
            a[i]=10;
        else if(rom[i]=='L')
            a[i]=50;
        else if(rom[i]=='C')
            a[i]=100;
        else if(rom[i]=='D')
            a[i]=500;
        else if(rom[i]=='M')
            a[i]=1000;
        else
        {
            printf("Invalid value entered\n");
            return 0;
        }
    }
    int res=a[len-1];
    for(int i=len-1;i>0;i--)
        if(a[i]>a[i-1])
            res=res-a[i-1];
        else
            res=res+a[i-1];
    printf("Entered roman number is %s\n",rom);
    printf("Equivalent decimal number is %d",res);
}

/*Output:
Enter a roman number
LIX
Entered roman number is LIX
Equivalent decimal number is 59*/