// Write a C program to find largest of n numbers

#include <stdio.h>
int main()
{
    int n,a;
    printf("Enter the number of numbers\n");
    scanf("%d",&n);
    printf("Please enter %d numbers\n",n);
    scanf("%d",&a);
    int large=a;
    for(int i=2;i<=n;i++)
    {
        scanf("%d",&a);
        if(a>large)
            large=a;
    }
    printf("Largest of the entered %d numbers is %d",n,large);
}

/*Output:
Enter the number of numbers
4
Please enter 4 numbers
-4	 6	 2	33
Largest of the entered 4 numbers is 33*/