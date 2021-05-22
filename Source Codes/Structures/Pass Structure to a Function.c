// Write a C program which passes structure to function

#include<stdio.h>
struct student
{
    char name[20];
    int roll_no;
    float marks;
}s;
void print(struct student s1)
{
    printf("Entered details are\n");
    printf("Name:%s\nRoll 
                no:%d\nMarks:%.2f",s1.name,s1.roll_no,s1.marks);
}
int main()
{
    printf("Enter name,roll no,marks of a student\n");
    scanf("%s %d %f",s.name,&s.roll_no,&s.marks);
    print(s);
}

/*Output:
Enter name,roll no,marks of a student
abc
2351
48
Entered details are
Name:abc
Roll no:2351
Marks:48.00*/