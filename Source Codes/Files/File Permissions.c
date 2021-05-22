// Write a C program to know permission of any file

#include<sys/stat.h>
#include<stdio.h>
int main()
{
    struct stat status;
    FILE *fptr;
    fptr=fopen("file1.txt","r");
    stat(fptr,&status);
    if (status.st_mode & S_IREAD)
         printf("You have read permission.\n");
    if (status.st_mode & S_IWRITE)
         printf("You have write permission.\n");
    fclose(fptr);
}

/*Output:
You have read permission.*/