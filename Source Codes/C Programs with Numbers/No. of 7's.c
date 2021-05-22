// Write a C program to count the total number of 7 coming between 1 to 100

#include<stdio.h>
int main()
{
    int count=0;
    for(int i=1;i<=100;i++)
        for(int j=i;j!=0;j/=10)
            if(j%10==7)
                count++;
    printf("Number of 7's coming in betweeen 1 & 100 is %d",count);
}

/*Output:
Number of 7's coming in betweeen 1 & 100 is 20*/