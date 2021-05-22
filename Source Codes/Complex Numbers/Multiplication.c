// Write a C program for multiplication of two complex numbers

#include<stdio.h>
int main()
{
    int a,b,c,d,p,q;
    printf("Enter a & b in a+ib\n");
    scanf("%d %d",&a,&b);
    printf("Enter c & d in c+id\n");
    scanf("%d %d",&c,&d);
    p=a*c-b*d;
    q=a*d+b*c;
    if(b>0)
        printf("(%d+%di)*",a,b);
    else
        printf("(%d-%di)*",a,-b);
    if(d>0)
        printf("(%d+%di)=",c,d);
    else
        printf("(%d-%di)=",c,-d);
    if(q>0)
        printf("(%d+%di)",p,q);
    else
        printf("(%d-%di)",p,-q);
}

/*Output:
Enter a & b in a+ib
1	3
Enter c & d in c+id
5	-2
(1+3i)*(5-2i)=(11+13i)*/