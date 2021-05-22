// Write a C program to delete a file

#include<stdio.h>
int main()
{
   char f_name[50];
   printf("Enter filename to be deleted\n");
   scanf("%s",f_name);
   if(remove(f_name)==0)
      printf("%s is successfully deleted\n",f_name);
   else
      printf("Unable to delete the file\n");
}

/*Output:
Enter filename to be deleted
file3
Unable to delete the file

Enter filename to be deleted
file2.txt
file2.txt is successfully deleted*/