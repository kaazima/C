// Write a C program to set the text to different colours

#include<stdio.h>
int main()
{
    printf("\n");
    printf("\033[0;30m");   // sets the text to black colour
    printf("Hello World");
    printf("\033[0;31m");   // red
    printf("Hello World");
    printf("\033[0;32m");   // green
    printf("Hello World");
    printf("\033[0;33m");   // yellow
    printf("Hello World");
    printf("\033[0;34m");   // blue
    printf("Hello World");
    printf("\033[0;35m");   // purple
    printf("Hello World");
    printf("\033[0;36m");   // cyan
    printf("Hello World");
    printf("\033[0;37m");   // white
    printf("Hello World");
    printf("\033[0m");      // resets the text to default colour
    printf("Hello World");
    printf("\n");
    return 0;
}