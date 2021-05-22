// Write a C program to print the all prime numbers between 1 to 300

#include <stdio.h>
int main()
{
    printf("Prime numbers between 1 to 300 are\n");
    for(int i=2;i<=300;i++)
    {
        int flag=0;
        for(int j=2;j<=i/2;j++)
            if(i%j==0)
            {
                flag=1;
                break;
            }
        if(flag==0)
            printf("%d ",i);
    }
}

/*Output:
Prime numbers between 1 to 300 are
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199 211 223 227 229 233 239 241 251 257 263 269 271 277 281 283 293*/