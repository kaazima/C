// Write a C program to convert each digits of a number in words

#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=n;i!=0;i/=10)
        rev=rev*10+(i%10);
    printf("%d = ",n);
    for( ;rev!=0;rev/=10)
        switch(rev%10)
        {
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
            
        }
}

/*Output:
Enter a number
40568
40568 = Four Zero Five Six Eight */