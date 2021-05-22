// Write a C program to solve quadratic equation

#include <stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    printf("Enter a,b,c in ax^2+bx+c\n");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        printf("Roots are real and distinct\n");
        printf("Roots of the quadratic equation are %.2f & %.2f",(-b+sqrt(d))/2*a,(-b-sqrt(d))/2*a);
    }
    else if(d==0)
    {
        printf("Roots are real and equal\n");
        printf("The root of the quadratic equation is %.2f",-b/2*a);
    }
    else
    {
        printf("Roots are complex\nRoots of the quadratic equation are ");
        printf("(%.2f)+(%.2f)i & (%.2f)+(%.2f)i",-b/2*a,sqrt(-d)/2*a,-b/2*a,-sqrt(-d)/2*a);
    }
}

/*Output:
Enter a,b,c in ax^2+bx+c
1	-5	6
Roots are real and distinct
Roots of the quadratic equation are 3.00 & 2.00*/