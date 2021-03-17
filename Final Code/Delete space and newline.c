#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp,*fp1;
    char ch;
    fp=fopen("abc.txt","r");
    fp1=fopen("def.txt","w");
    if(fp==NULL)
    {
        printf("Cann't open the file");
        return 0;
    }
    else
    {
        while((ch=fgetc(fp))!=EOF)
        {
            if(ch==' '|| ch=='\n'||ch=='\t')
            {
            }
            else
            {
                fprintf(fp1,"%c",ch);
            }
        }
    }
    fclose(fp);
    return 0;
}
