// Write a C program to find the number of lines in a text file

#include<stdio.h>
int main()
{
   FILE *fp;
   char ch;
   int count=0;
   fp=fopen("file1.txt","r");
   printf("Contents of the file are\n");
   while((ch=fgetc(fp))!=EOF)
      printf("%c",ch);
   rewind(fp);
   ch=fgetc(fp);
   while(ch!=EOF)
   {
      if(ch=='\n')
         count++;
      ch=fgetc(fp);
   }
   fclose(fp);
   printf("Number of lines in the file : %d\n",count);
}

/*Output:
Contents of the file are
Nice to meet you :)
Enjoy Coding ;)
See you later, Bye
Number of lines in the file : 3*/