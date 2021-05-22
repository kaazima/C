// Write a C Program to calculate Standard Deviation

#include<stdio.h>
#include<math.h>
float stand_dev(int arr[],int n)
{
    float mean=0,sd=0;
    for(int i=0;i<n;i++)
        mean+=arr[i];
    mean/=n;
    for(int i=0;i<n;i++)
        sd+=pow(arr[i]-mean,2);
    sd/=n;
    return sqrt(sd);
}
int main()
{
    int n;
    printf("Enter total number of numbers\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Standard Deviation is %f",stand_dev(a,n));
}

/*Output:
Enter total number of numbers
5
Enter 5 numbers
12	5	47	20	36
Standard Deviation is 15.453156*/