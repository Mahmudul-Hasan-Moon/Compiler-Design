#include<stdio.h>
#include<ctype.h>

int main()
{
    FILE *fp1,*fp2;

    fp1= fopen("input.txt","r");  // open a file to read input
    fp2= fopen("output.txt","w");  // open a file to show output

    char s[20];

    while(fgets(s,100,fp1)!=NULL)
    {
        int i;
        char n='1';

        for(i=0; s[i]!='\0'; i++)
        {
            switch(n)
            {
            case '1':
                if(isalpha(s[i])||s[i]=='_')  n='2';
                else   n='4';
                break;
            case '2':
                if(isalnum(s[i])||s[i]=='_')  n='2';
                else  n='3';
                break;
            }
        }
        if(n=='3')
            fprintf(fp2,"Identifier\n");
        else
            fprintf(fp2,"Not\n");
    }

    return 0;
}
