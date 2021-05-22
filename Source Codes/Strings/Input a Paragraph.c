// Write a scanf function in c which accept paragraph from user

#include <stdio.h>
int main()
{
    char a[100];
    printf("Enter a Paragraph\nPress tab to exit\n");
    scanf("%[^\t]s",a);
    printf("Entered paragraph is \n%s",a);
}

/*Output:
Enter a Paragraph
Press tab to exit
Hello!!!Nice to meet you.
Enjoy coding:)
Bye.
	
Entered paragraph is 
Hello!!!Nice to meet you.
Enjoy coding:)
Bye.*/