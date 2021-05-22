// Write a C program to find out size of any file

#include<stdio.h>
int main()
{
   FILE *fptr;
   fptr=fopen("file1.txt","r");
   fseek(fptr,0,SEEK_END); 		                    // Moves pointer to the end
   printf("Size of file1 is %ld\n",ftell(fptr));    // Prints position of pointer
}

/*Output:
Size of file1 is 19*/