#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],a1[10],a2[10],a3[10],a4[10],a5[10];
    char LNT;
    int i,j=0,k=0,l=0,m=0,n=0,p=0;

    printf("Enter the production : \n");
    gets(s);

    LNT=s[0];
    for(i=3;s[i]!='|';i++){   ///to make a string previous | character
        a1[j]=s[i];
        j++;
    }
    a1[j]='\0';

    for(i=i+1;s[i]!='\0';i++){  ///to make a string before | character
        a2[k]=s[i];
        k++;
    }
    a2[k]='\0';

    for(i=0;i<strlen(a1)||i<strlen(a2);i++)  ///Find common portion from a1 and a2
    {
        if(a1[i]==a2[i])
        {
            a3[l]=a1[i];
            l++;
            p=i+1;
        }
    }
    a3[l]='\0';

    for(i=p;a1[i]!='\0';i++){  ///Add uncommon part of a1 in a4
        a4[m]=a1[i];
        m++;
    }

    if(m==0)
        a4[m++]='$';    ///$ means epsilon that added when no character is remaining in the a1

    a4[m++]='|';
    n=m;
    for(i=p;a2[i]!='\0';i++){
        a4[m]=a2[i];
        m++;
    }
    if(n==m)
        a4[m++]='$';
    a4[m]='\0';

    printf("%c->%s%c'\n",LNT,a3,LNT);
    printf("%c'->%s\n",LNT,a4);

    return 0;
}
