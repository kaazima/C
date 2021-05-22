/*String libraries
•	Strlen
•	Strcpy
•	Strncpy
•	Strcat
•	Strncat
•	Strcmp
•	Strncmp
•	Strstr
•	Strchr
•	Strrchr
•	Strspn
•	Strcspn
•	Strpbrk
•	Strtok
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[50]="Good Morning!!!";
    char b[50]="This is my assignment ";
    char c[50];
    char d[50]="five",e[50]="six";
    char f[50]="May God bless you :)";
    char g[50]="God";                  
    char h[50]="www.amazon.com";
    printf("strlen(a) - %d\n",strlen(a));           //strlen
    printf("strcpy(c,b) - ");
    puts(strcpy(c,b));                              //strcpy
    printf("strncpy(b,a,4) - ");
    puts(strncpy(b,a,4));                           //strncpy
    printf("strcat(a,c) - ");
    puts(strcat(a,c));                              //strcat
    printf("strncat(b,cool!superb!!,4) - ");
    puts(strncat(b,"cool!superb!!",4));             //strncat
    printf("strcmp(d,e) - %d\n",strcmp(d,e));
    if(strcmp(d,e)>0)                               //strcmp
        printf("%s is greater than %s\n",d,e);
    else if(strcmp(d,e)<0)
        printf("%s is less than %s\n",d,e);
    else
        printf("%s is equal to %s\n",d,e);
    printf("strncmp(space,spaceship,4) - %d\n",strncmp("space","spaceship",4));                 //strncmp
    printf("strstr(f,g) - ");
    puts(strstr(f,g));                              //strstr
    if(strchr(g,'d'))                               //strchr
        printf("%c is present in %s\n",'d',g);
    else
        printf("%c is not present in %s\n",'d',g);
    printf("strrchr(h,'.') - ");
    puts(strrchr(h,'.'));                           //strrchr
    printf("strspn(believe in yourself,belief) - %d\n",strspn("believe in yourself","belief")); //strspn
    printf("strcspn(ordinary,dell) - %d\n",strcspn("ordinary","dell"));                         //strcspn
    char *x=strpbrk(d,e);                                                                       //strpbrk
    if(x)
        printf("1st matching character of %s & %s is %c\n",d,e,*x);
    else
        printf("No matching character\n");
    char *y=strtok(h,".");                          //strtok
    while(y)
    {
        printf("%s\n",y);
        y=strtok(NULL,".");
    }
}

/*Output:
strlen(a) - 15
strcpy(c,b) - This is my assignment 
strncpy(b,a,4) - Good is my assignment 
strcat(a,c) - Good Morning!!!This is my assignment 
strncat(b,cool!superb!!,4) - Good is my assignment cool
strcmp(d,e) - -13
five is less than six
strncmp(space,spaceship,4) - 0
strstr(f,g) - God bless you :)
d is present in God
strrchr(h,'.') - .com
strspn(believe in yourself,belief) - 5
strcspn(ordinary,dell) - 2
1st matching character of five & six is i
www
amazon
com*/