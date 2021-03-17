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

    if(strcmp(rev,str))
        printf("The string is not a palindrome.\n");
    else
        printf("The string is palindrome.\n");
    return 0;
}

