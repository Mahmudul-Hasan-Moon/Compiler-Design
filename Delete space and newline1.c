
#include<stdio.h>
int main()
{
    FILE *fp,*fp1;
    char ch;


    fp=fopen("a.txt","r");     // open a file to read input
    fp1=fopen("b.txt","w");    // open a file to show output

    while(1){      // infinite loop to take single character
        ch=fgetc(fp);

        if(ch==EOF)
            break;
        else
        {
            if(ch==' '|| ch=='\n')
            {
            }
            else
            {
                fprintf(fp1,"%c",ch);
            }
        }
    }
    fclose(fp);     //close the file


    return 0;
}
