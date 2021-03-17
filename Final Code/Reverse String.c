#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100];
    int i,j;
    printf("Enter a string :  \n");
    scanf("%s",str);

    j=0;
    for(i=strlen(str)-1;i>=0;i--){
        rev[j]=str[i];
    j++;
    }

 rev[j]='\0';

    printf("The reverse string is %s\n",rev);

    return 0;
}


