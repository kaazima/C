// Write a C program to know last date of modification of any file

#include<time.h>
#include<sys/stat.h>
#include<stdio.h>
int main()
{
    struct stat s;
    FILE *fptr;
    fptr=fopen("file1.txt","r");
    fstat(fileno(fptr),&s);
    printf("Last date of modification is %s",ctime(&s.st_ctime));
    fclose(fptr);
}

/*Output:
Last date of modification is Fri Nov 8 14:55:17 2019*/