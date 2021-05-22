// Write a C program to copy data of a file to other file

#include<stdio.h>
int main()
{
   FILE *fp1,*fp2;
   char f_name[50],ch;
   printf("Enter filename to open in read mode\n");
   scanf("%s",f_name);
   fp1=fopen(f_name,"r");
   if((fp1=fopen(f_name,"r"))==NULL)
      printf("Unable to open the file\n");
   printf("Enter filename to open in write mode\n");
   scanf("%s",f_name);
   fp2=fopen(f_name,"w");
   if((fp2=fopen(f_name,"w"))==NULL)
      printf("Unable to open the file\n");
   ch=fgetc(fp1);
   while(ch!=EOF)
   {
      fputc(ch,fp2);
      ch=fgetc(fp1);
   }
   printf("Contents are successfully copied to %s\n",f_name);
   fclose(fp1);
   fclose(fp2);
}

/*Output:
Enter filename to open in read mode
file1.txt
Enter filename to open in write mode
file2.txt
Contents are successfully copied to file2.txt*/