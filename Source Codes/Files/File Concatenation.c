// Write a C program which concatenate two file and write it to third file

#include<stdio.h>
int main()
{
   FILE *fp1,*fp2,*fp3;
   char f1[15],f2[15],f3[15],ch;
   printf("Enter name of first file\n");
   gets(f1);
   printf("Enter name of second file\n");
   gets(f2);
   printf("Enter name of destination file\n");
   gets(f3);
   fp1=fopen(f1,"r");
   fp2=fopen(f2,"r");
   fp3=fopen(f3,"w");
   while((ch=fgetc(fp1))!=EOF)
      fputc(ch,fp3);
   while((ch=fgetc(fp2))!=EOF)
      fputc(ch,fp3);
   printf("Concatenation of the files is done successfully\n");
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
}

/*Output:
Enter name of first file
file1.txt
Enter name of second file
file2.txt
Enter name of destination file
file3.txt
Concatenation of the files is done successfully*/