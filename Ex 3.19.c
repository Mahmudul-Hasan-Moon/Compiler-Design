#include<stdio.h>

int main()
{
    FILE *fp1,*fp2;

    fp1=fopen("input.txt","r");  // open a file to read input
    fp2=fopen("output.txt","w");  // open a file to show output

    char s[100],n;
    while(fgets(s,100,fp1)!=NULL){
    int i;
    char n='1';

       for(i=0;s[i]!=NULL;i++){
        switch(n)   //switch statement for construct DFA
        {0
            case '1': if(s[i]=='a') n='2';
               else if(s[i]=='b'||s[i]=='c')   n='6';
               break;
            case '2': if(s[i]=='a') n='6';
               else if(s[i]=='b')   n='3';
               break;
            case '3': if(s[i]=='a') n='3';
               else if(s[i]=='b')   n='4';
               break;
            case '4': if(s[i]=='a') n='4';
               else if(s[i]=='b')   n='3';
               else if(s[i]=='c')   n='5';
               break;
            case '5': if(s[i]=='a') n='4';
               else if(s[i]=='b')   n='3';
               break;
            case '6': if(s[i]=='a'||s[i]=='b'||s[i]=='c') n='6';
               break;

        }
}

          if(n=='5')
                fprintf(fp2,"Accepted\n");
          else
                fprintf(fp2,"Not Accepted\n");
    }

    return 0;
}


