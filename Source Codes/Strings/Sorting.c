// Write a C Program to sort elements in Lexicographical Order (Dictionary Order)

#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter number of words\n");
    scanf("%d",&n);
    char a[n][50];
    printf("Enter %d words\n",n);
    gets(a[0]);
    for(int i=0;i<n;i++)
        gets(a[i]);
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(strcmp(a[i],a[j])>0)
            {
                char temp[50];
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
    printf("Entered words in lexicographical order are\n");
    for(int i=0;i<n;i++)
        puts(a[i]);
}

/*Output:
Enter number of words
3
Enter 3 words
dictionary
encyclopedia
book
Entered words in lexicographical order are
book
dictionary
encyclopedia*/