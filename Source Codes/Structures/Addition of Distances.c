// Write a C Program to add two distances (in inch-feet) system using structures

#include<stdio.h>
struct distance
{
    int feet;
    float inch;
}d,d1,d2;
int main()
{
    printf("Enter 1st distance in feet and inch\n");
    scanf("%d %f",&d1.feet,&d1.inch);
    printf("Enter 2nd distance in feet and inch\n");
    scanf("%d %f",&d2.feet,&d2.inch);
    d.feet=d1.feet+d2.feet;
    d.inch=d1.inch+d2.inch;
    if(d.inch>12)
    {
        d.inch=d.inch-12;
        d.feet++;
    }
    printf("Sum of the distances is %d' %.2f\"\n",d.feet,d.inch);
}

/*Output:
Enter 1st distance in feet and inch
20	2.5
Enter 2nd distance in feet and inch
5	3.8
Sum of the distances is 25' 6.30"*/