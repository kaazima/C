// Write a C code for power of large numbers

#include<stdio.h>
int mul(int x,int res[1000], int rs)
{
    int c=0,i,p;
    for(i=0;i<rs;i++)
    {
       p=res[i]*x+c;
       res[i]=p%10;
       c=p/10;
    }
    while(c!=0)
    {
       res[rs]=c%10;
       c=c/10;
       rs++;
    }
    return rs;
}        
void power(int a, int n)
{
  int res[1000];
  res[0]=1;
  int rs=1;
  for(int i=0;i<n;i++)rs=mul(a,res,rs);
  printf("%d power %d is ",a,n);
  for(int i=rs-1;i>=0;i--)printf("%d",res[i]);
  printf("\n");
}   
int main()
{
  int a,n;
  printf("Enter the base :");
  scanf("%d",&a);
  printf("Enter the index :");
  scanf("%d",&n);
  power(a,n);
}

/*Output:
Enter the base :123
Enter the index :201
123 power 201 is 1177409130471818245590382737948841277781665442824035964070098621309992164719179158512322834012335531899145360871491072595356725839669782885553620512107329655657489069854987397671942406286773408235279180556818283281402049200964341144462821389024487700690543742705188135348463812537506921219778459882006476790301091354038752608117851743677308650798476460952932588500357336472509267333029178536345953810316608392748824516123*/