#include<stdio.h>

int main()
{
    FILE *fp1,*fp2;

    fp1= fopen("in.txt","r");
    fp2= fopen("out.txt","w");

    char s[100];

    while(fgets(s,100,fp1)!=NULL)
    {
        int i;
        int n=1;

        for(i=0;s[i]!='\0'; i++)
        {
            if(isalpha(s[i])&&(s[i]!='E'&&s[i]!='.'))
              break;
            switch(n)
            {
            case 1: if(s[i]>='0'&&s[i]<='9')  n=2;
                      break;
            case 2: if(s[i]==' '||s[i]=='\n'||s[i]=='\0') n=9;
                else if(s[i]>='0'&&s[i]<='9')  n=2;
                        else if(s[i]=='.')  n=3;
                        else if(s[i]=='E')  n=5;
                        break;
            case 3: if(s[i]>='0'&&s[i]<='9')  n=4;
                      break;
            case 4: if(s[i]>='0'&&s[i]<='9')  n=4;
                        else if(s[i]=='E')  n=5;
                        else n=10;
                        break;
            case 5: if(s[i]>='0'&&s[i]<='9')  n=7;
                        else if(s[i]=='+'||s[i]=='-')  n=6;
                        break;
            case 6: if(s[i]>='0'&&s[i]<='9')  n=7;
                      break;
            case 7: if(s[i]>='0'&&s[i]<='9')  n=7;
                        else  n=8;
                        break;
            }

        }
        if(n==8||n==9||n==10)
            fprintf(fp2,"This is a number\n");
        else
            fprintf(fp2,"This is not a number\n");
    }

    return 0;
}

