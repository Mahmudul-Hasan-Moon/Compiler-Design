#include<stdio.h>
#include<ctype.h>

int main()
{
    FILE *fp1,*fp2;

    fp1= fopen("input.txt","r");   // open a file to read input
    fp2= fopen("output.txt","w");   // open a file to show output

    char s[20];

    while(fgets(s,100,fp1)!=NULL)
    {
        int i;
        char n='0';

        for(i=0; s[i]!=NULL; i++)
        {
            switch(n)
            {
            case '0':
                if(s[i]=='<')  n='1';
                else if(s[i]=='=')  n='5';
                else if(s[i]=='>')  n='6';
                break;
            case '1':
                if(s[i]=='=')  n='2';
                else if(s[i]=='>')  n='3';
                else   n='4';
                break;
            case '6': if(s[i]=='=')  n='7';
                        else   n='8';
            }
        }
        if(n=='2')
            fprintf(fp2,"Less than equal\n");
        else if(n=='3')
            fprintf(fp2,"Not equal\n");
        else if(n=='4')
            fprintf(fp2,"Less than\n");
        else if(n=='5')
            fprintf(fp2,"Equal\n");
        else if(n=='7')
            fprintf(fp2,"Greater than equal\n");
        else if(n=='8')
            fprintf(fp2,"Greater than\n");
    }

    return 0;
}
