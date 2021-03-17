#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{

    FILE *fp1,*fp2;

    fp1= fopen("input.txt","r");  // open a file to read input
    fp2= fopen("output.txt","w");  // open a file to show output

    char s[32][10]= {"auto","double","int","struct","break","else","long",     /*32 keyword of c store in here*/
       "switch","case","enum","register","typedef","char",
       "extern","return","union","const","float","short",
       "unsigned","continue","for","signed","void","default",
       "goto","sizeof","voltile","do","if","static","while"} ;

    char st[10],ss[10];
    int i,m,j;

    while(fgets(st,10,fp1)!=NULL) //take each word as a input
    {
        for(i=0,j=0;st[i]!='\0';i++)
            if(isalnum(st[i]))
                ss[j++]=st[i];
        ss[j]='\0';
        m=0;
        for(i=0; i<32; i++)
        {
            if(strcmp(ss,s[i])==0)   //compare each string with the keyword
                m=1;
        }
        if(m==0)
            fprintf(fp2,"it is not a keyword\n");
        else
            fprintf(fp2,"it is a keyword\n");
    }
    return 0;
}
