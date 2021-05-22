// Write a C Program to calculate difference between two time periods

#include<stdio.h>
struct Time
{
    int h,m,s;
}t,t1,t2;
int main()
{
    printf("Enter 2 time periods in 24-hour format in descending order\n");
    printf("Enter time1 in hours, minutes & seconds separated by spaces\n");
    scanf("%d %d %d",&t1.h,&t1.m,&t1.s);
    printf("Enter time2 in hours, minutes & seconds separated by spaces\n");
    scanf("%d %d %d",&t2.h,&t2.m,&t2.s);
    printf("Time difference is\n");
    printf("%d:%d:%d-%d:%d:%d=",t1.h,t1.m,t1.s,t2.h,t2.m,t2.s);
    if(t2.s>t1.s)
    {
        t1.m--;
        t1.s+=60;
    }
    t.s=t1.s-t2.s;
    if(t2.m>t1.m)
    {
        t1.h--;
        t1.m+=60;
    }
    t.m=t1.m-t2.m;
    t.h=t1.h-t2.h;
    printf("%d:%d:%d",t.h,t.m,t.s);
}

/*Output:
Enter 2 time periods in 24-hour format in descending order
Enter time1 in hours, minutes & seconds separated by spaces
12	8	36
Enter time2 in hours, minutes & seconds separated by spaces
8	54	12
Time difference is
12:8:36-8:54:12=3:14:24*/