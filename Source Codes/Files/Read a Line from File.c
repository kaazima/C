// Write a C Program to read a line from a file and display it

#include<stdio.h>
int main()
{
   FILE *fp;
   char ch;
   if((fp=fopen("file1.txt","r"))==NULL)
   {
      printf("Can't open the file\n");
      return 0;
   }
   printf("A line from the file is \n");
   while((ch=fgetc(fp))!='\n')
      putchar(ch);
   printf("\n");
   fclose(fp);
}

/*Output:
A line from the file is
Nice to meet you :)*/