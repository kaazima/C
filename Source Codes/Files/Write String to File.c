// Write a C program which writes string to the file

#include<stdio.h>
int main()
{
   FILE *fptr;
   char str[50];
   fptr=fopen("file2.txt","w");
   printf("File is opened\n");
   printf("Enter a string to be stored in file\n");
   gets(str);
   fputs(str,fptr);
   fclose(fptr);
   printf("File is closed\n");
}

/*Output:
File is opened
Enter a string to be stored in file
Welcome back :)
File is closed*/