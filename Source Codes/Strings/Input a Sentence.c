// Write a scanf function in c which accept sentence from user

#include <stdio.h>
int main()
{
    char a[100];
    printf("Enter a sentence\nPress enter to exit\n");
    scanf("%[^\n]s",a);
    printf("Entered sentence is %s",a);
}

/*Output:
Enter a sentence
Press enter to exit
This is a code in C language
Entered sentence is This is a code in C language*/