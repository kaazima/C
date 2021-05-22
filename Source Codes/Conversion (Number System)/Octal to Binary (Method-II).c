// Write a C program to convert octal number to binary number

#include<stdio.h>
int main()
{
    char oct[100];
    printf("Enter an octal number\n");
    scanf("%s",oct);
    printf("Equivalent binary number is \n");
    for(long int i=0;oct[i]!='\0';i++)
        switch(oct[i])
        {
            case '0': printf("000"); break;
            case '1': printf("001"); break;
            case '2': printf("010"); break;
            case '3': printf("011"); break;
            case '4': printf("100"); break;
            case '5': printf("101"); break;
            case '6': printf("110"); break;
            case '7': printf("111"); break;
            default:  printf("\nInvalid octal digit %c entered\n",oct[i]);
        }
}

/*Output:
Enter an octal number
425
Equivalent binary number is 
100010101*/