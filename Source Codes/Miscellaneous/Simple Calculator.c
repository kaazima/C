// Write a C Program to make a simple calculator using switch...case

#include <stdio.h>
int main()
{
    int option,a,b;
    char ch;
    do
    {
        printf("Enter 2 numbers\n");
        scanf("%d %d",&a,&b);
        printf("Enter 1.Addition, 2.Substraction, 3.Multiplication,
                    4.Division\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            printf("Addition of %d & %d gives %d\n",a,b,a+b);
            break;
            case 2:
            printf("Substraction of %d & %d gives %d\n",a,b,a-b);
            break;
            case 3:
            printf("Multiplication of %d & %d gives %d\n",a,b,a*b);
            break;
            case 4:
            printf("Dividing %d by %d gives %d\n",a,b,a/b);
            break;
            default:
            printf("Invalid option entered. Please enter a valid option\n");
        }
        printf("Do you wish to continue?(y/n)\n");
        scanf("%c",&ch);
        scanf("%c",&ch);
    }while(ch=='y' || ch=='Y');
}

/*Output:
Enter 2 numbers
2	3
Enter 1.Addition, 2.Substraction, 3.Multiplication, 4.Division
3
Multiplication of 2 & 3 gives 6
Do you wish to continue?(y/n)
y
Enter 2 numbers
5	8
Enter 1.Addition, 2.Substraction, 3.Multiplication, 4.Division
1
Addition of 5 & 8 gives 13
Do you wish to continue?(y/n)
n*/