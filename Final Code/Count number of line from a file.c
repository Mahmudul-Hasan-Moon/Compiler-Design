#include<stdio.h>
int main()
{
    FILE *fp,*fp1;
    char ch;

    int space=0,line=0,alp=0,c=0;
    fp=fopen("test.txt","r");
    fp1=fopen("test1.txt","w");

    while(1){
        ch=fgetc(fp);

        if(ch==EOF)
            break;
        else
        {
            c++;
            if(ch==' ')
                space++;
            else if(ch=='\n')
                line++;
            else
                alp++;
        }
    }
    fclose(fp);

    fprintf(fp1,"Total number of character = %d\n",c);
    fprintf(fp1,"Total number of space  =  %d\n",space);
    fprintf(fp1,"Total number of line  =  %d\n",line);
    fprintf(fp1,"Total number of alphabet  =  %d\n",alp);

    return 0;
}
