// Write a C Program to find whether system is little endian or big endian

#include <stdio.h>
int main()
{
    unsigned int value = 0x1;
    char *r=(char *)&value;
    if (*r==1) 
        printf("My system is Little Endian\n");
    else
        printf("My system is Big Endian\n");
}

/*Output:
My system is Little Endian*/