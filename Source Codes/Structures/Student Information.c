// Write a C Program to store information (name, roll and marks) of a student using structure

#include<stdio.h>
struct student
{
    char name[20];
    int roll_no;
    float marks;
}s;
int main()
{
    printf("Enter name,roll no,marks of a student\n");
    scanf("%s %d %f",s.name,&s.roll_no,&s.marks);
    printf("Entered details are\n");
    printf("Name:%s\nRoll    
                no:%d\nMarks:%.2f",s.name,s.roll_no,s.marks);
}

/*Output:
Enter name,roll no,marks of a student
abc	23	45
Entered details are
Name:abc
Roll no:23
Marks:45.00*/