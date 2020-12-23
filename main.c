#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Rus");
    int i,j,n,count=0;



    char s[80];
    printf("¬ведите строку:\n");
    gets(s);
    n=strlen(&s[0]);


    j=0;
    for(i=0;i<n;i++)
    {
        if(s[i]==' ')
        {
            if((i!=n-1) && (i+1)!=(n-1) && s[i+1]!=' ' && s[i+1]!='.' && j!=0){s[j]=' ';j++;}
        }
        else{s[j]=s[i];j++;}
    }
    s[j]='\0';

    puts(s);
    return 0;
}
