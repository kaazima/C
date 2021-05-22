// Write a C program which reads string from the file

#include<stdio.h>
int main()
{
   FILE *fptr;
   char str[50];
   fptr=fopen("file2.txt","r");
   if((fptr=fopen("file2.txt","r"))==NULL)
      printf("Unable to open the file\n");
   else if(fgets(str,50,fptr)!=NULL)
      puts(str);
   fclose(fptr);
   printf("File is closed\n");
}

/*Output:
Welcome back :)
File is closed*/