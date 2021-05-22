// Write a C program to open a file and write some text and close it

#include<stdio.h>
int main()
{
   FILE *fptr;
   char ch;
   fptr=fopen("file1.txt","w");
   printf("File is opened\n");
   printf("Enter data to be stored in the file\n");
   while((ch=getchar())!='\n')
      fputc(ch,fptr);
   fclose(fptr);
   printf("File is closed\n");
}

/*Output:
File is opened
Enter data to be stored in the file
Nice to meet you :)
File is closed*/