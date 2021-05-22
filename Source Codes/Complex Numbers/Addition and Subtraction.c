// Write a C program for addition and subtraction of two complex numbers

#include<stdio.h>
int main()
{
    int a,b,c,d,p,q,m,n;
    printf("Enter a & b in a+ib\n");
    scanf("%d %d",&a,&b);
    printf("Enter c & d in c+id\n");
    scanf("%d %d",&c,&d);
    p=a+c;
    q=b+d;
    if(b>0)
        printf("(%d+%di)+",a,b);
    else
        printf("(%d-%di)+",a,-b);
    if(d>0)
        printf("(%d+%di)=",c,d);
    else
        printf("(%d-%di)=",c,-d);
    if(q>0)
        printf("(%d+%di)",p,q);
    else
        printf("(%d-%di)",p,-q);
    m=a-c;
    n=b-d;
    if(b>0)
        printf("\n(%d+%di)-",a,b);
    else
        printf("\n(%d-%di)-",a,-b);
    if(d>0)
        printf("(%d+%di)=",c,d);
    else
        printf("(%d-%di)=",c,-d);
    if(n>0)
        printf("(%d+%di)",m,n);
    else
        printf("(%d-%di)",m,-n);
}

/*Output:
Enter a & b in a+ib
5	9
Enter c & d in c+id
8	-3
(5+9i)+(8-3i)=(13+6i)
(5+9i)-(8-3i)=(-3+12i)*/