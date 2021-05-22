// Write a C program to copy a file from one location to other location

#include<stdio.h>
int main()
{
   if(rename("test1/file","test2/file")==0)
      printf("File moved successfully\n");
   else
      printf("Unable to copy the file\n");
}

/*Output:
File moved successfully*/