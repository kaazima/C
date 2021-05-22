// Write a C program which takes password from user

#include <stdio.h>
int main()
{
    char password[20],ch;
    int i=0;
    printf("Enter a password\n");
    while((ch=getchar())!='\n')
    {
        password[i++]=ch;
        printf("*");
    }
    password[i]='\0';
    if(i<7)
        printf("\nWeak password");
    else
        printf("\nStrong password");
    printf("\nEntered password is %s",password);
}

/*Output:
Enter a password
hello@123
*********
Strong password
Entered password is hello@123*/