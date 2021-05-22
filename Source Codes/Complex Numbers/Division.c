// Write a C program for division two complex numbers

#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter a & b in a+ib\n");
    scanf("%d %d",&a,&b);
    printf("Enter c & d in c+id\n");
    scanf("%d %d",&c,&d);
    float p=(float)(a*c+b*d)/(c*c+d*d);
    float q=(float)(b*c-a*d)/(c*c+d*d);
    if(b>0)
        printf("(%d+%di)/",a,b);
    else
        printf("(%d-%di)/",a,-b);
    if(d>0)
        printf("(%d+%di)=",c,d);
    else
        printf("(%d-%di)=",c,-d);
    if(q>0)
        printf("(%.2f+%.2fi)",p,q);
    else
        printf("(%.2f-%.2fi)",p,-q);
}

/*Output:
Enter a & b in a+ib
11	13
Enter c & d in c+id
1	3
(11+13i)/(1+3i)=(5.00-2.00i)*/