// Write a C program to know type of the file

#include<sys/stat.h>
#include<stdio.h>
void main()
{
    struct stat s;
    stat("lab",&s);
    if (s.st_mode & S_IFDIR)
         printf("It is a Directory\n");
    if (s.st_mode & S_IFCHR)
         printf("It is a Character file\n");
    if (s.st_mode & S_IFREG)
         printf("It is a regular file\n");
}

/*Output:
It is a Directory*/