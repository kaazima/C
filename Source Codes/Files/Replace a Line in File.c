// Write a C program to replace a specified line in a text file

#include<stdio.h>
int main()
{
   FILE *fp,*tfp;
   char ch;
   int count=1,c;
   fp=fopen("file1.txt","r");
   printf("Contents of the file are\n");
   while((ch=fgetc(fp))!=EOF)
      printf("%c",ch);
   printf("Enter line number to be replaced\n");
   scanf("%d",&c);
   tfp=fopen("temp.txt","w");
   rewind(fp);
   ch=fgetc(fp);
   while(ch!=EOF)
   {
      if(ch=='\n')
         count++;
      if(c!=count)
         fputc(ch,tfp);
      else
     {
         while((ch=fgetc(fp))!='\n');
         fputc('\n',tfp);
         printf("Enter a line of text \n");
         scanf("%c",&ch); // buffer character
         while((ch=getchar())!='\n')
            fputc(ch,tfp);
         fputc('\n',tfp);
         count++;
      }
      ch=fgetc(fp);
   }
   fclose(fp);
   fclose(tfp);
   remove("file1.txt");
   rename("temp.txt","file1.txt");
   fp=fopen("file1.txt","r");
   printf("Contents of the modified file are\n");
   while((ch=fgetc(fp))!=EOF)
      printf("%c",ch);
   fclose(fp);
}

/*Output:
Contents of the file are
Nice to meet you :)
Have a good day
See you later, Bye
Enter line number to be replaced
2
Enter a line of text
Enjoy Coding ;)
Contents of the modified file are
Nice to meet you :)
Enjoy Coding ;)
See you later, Bye*/