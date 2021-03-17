#include<stdio.h>
#include<ctype.h>

int main()
{
    FILE *fp1,*fp2;

    fp1= fopen("input.txt","r");  /// open a file to read input
    fp2= fopen("output.txt","w");  /// open a file to show output

    char s[20];

    while(fgets(s,100,fp1)!=NULL)
    {

    char LNT,RNT,a1[10],a2[10];   ///LNT = Left non terminal  RNT= Right non terminal.
    int i=0,j=0,k=0;

    LNT=s[0];
    RNT=s[3];

    if(LNT==RNT){
        fprintf(fp2,"The grammar is left recursive.\n");

        for(i=4;s[i]!='|';i++){
            a1[j]=s[i];
            j++;
        }
        a1[j]='\0';

        for(i=i+1;s[i]!='\0';i++){
            a2[k]=s[i];
            k++;
        }
        a2[k]='\0';

        fprintf(fp2,"%c->%s%c'\n",LNT,a2,LNT);
        fprintf(fp2,"%c'->%s%c'|$\n",LNT,a1,LNT);   /// $ sign means epsilon
    }
    else
        fprintf(fp2,"The grammar is not recursive\n");

    }

    return 0;
}

