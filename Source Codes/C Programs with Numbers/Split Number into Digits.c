// Write a C program to split number into digits

#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Digits of %d are ",n);
    for(int i=n;i>0;i/=10)
        rev=rev*10+(i%10);
    for(int j=rev;j>0;j/=10)
        printf("%d ",j%10);
}

/*Output:
Enter a number
65432
Digits of 65432 are 6 5 4 3 2 */