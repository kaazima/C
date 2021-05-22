// Write a C Program to add two complex numbers by passing structure to a function

#include<stdio.h>
typedef struct complex
{
    float real,imag;
}comp;
comp add(comp a1,comp a2)
{
    comp a;
    a.real=a1.real+a2.real;
    a.imag=a1.imag+a2.imag;
    return a;
}
int main()
{
    comp c,c1,c2;
    printf("Enter real and imaginary parts of 1st complex no\n");
    scanf("%f %f",&c1.real,&c1.imag);
    printf("Enter real and imaginary parts of 2nd complex no\n");
    scanf("%f %f",&c2.real,&c2.imag);
    c=add(c1,c2);
    printf("Sum of the complex numbers is 
                (%.2f)+(%.2f)i\n",c.real,c.imag);
}

/*Output:
Enter real and imaginary parts of 1st complex no
2	5.3
Enter real and imaginary parts of 2nd complex no
1.5	5
Sum of the complex numbers is (3.50)+(10.30)i*/