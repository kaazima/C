// Write a C program to find size and drive of any file

#include<sys/stat.h>
#include<stdio.h>
int main()
{
    struct stat s;
    FILE *fptr;
    fptr=fopen("file1.txt","r");
    fstat(fileno(fptr),&s);
    printf("Size of the file is %d\n",s.st_size);
    printf("Drive name is %c\n",65+s.st_dev);
    fclose(fptr);
}

/*Output:
Size of the file is 20
Drive name is F*/