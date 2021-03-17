#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000

int main()
{
    FILE *fp;
    char line[MAX_SIZE];

    fp = fopen("test", "r");
    if(fp == NULL){
        fprintf(stderr, "Unable to open file");
        exit(EXIT_FAILURE);
    }

    int counter = 0; /*Number of lines*/

    while(fgets(line, sizeof(line), fp) != NULL){
        counter++;
    }

    printf("Number of lines in the file is %i", counter);

    return 0;
}
