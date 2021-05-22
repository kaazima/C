// Write a C program which writes array to the file

#include<stdio.h>
int main()
{
   FILE *fptr;
   int n;
   printf("Enter number of elements in the array\n");
   scanf("%d",&n);
   int a[n];
   printf("Enter %d elements\n",n);
   for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
   fptr=fopen("file2.txt","w");
   printf("File is opened\n");
   fwrite(a,sizeof(a),1,fptr);
   printf("Array is written to the file\n");
   fclose(fptr);
   printf("File is closed\n");
}

/*Output:
Enter number of elements in the array
5
Enter 5 elements
2 4 6 9 4
File is opened
Array is written to the file
File is closed*/