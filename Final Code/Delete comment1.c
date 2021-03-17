    #include<stdio.h>
    int main()
    {
    FILE *fp,*ft;
    char ch;

    fp=fopen("in.txt","r");
    ft=fopen("out.txt","w");

    while(1)
    {
            ch=fgetc(fp);
            if(ch==EOF)
                    break;
            if(ch=='/')
            {
                    ch=fgetc(fp);
                    if(ch=='*')
                    {
                            while(1){
                                ch=fgetc(fp);
                                if(ch=='*'){
                                    ch=fgetc(fp);
                                    if(ch=='/'||ch==EOF)
                                    {
                                        break;
                                    }
                                }
                                if(ch==EOF)
                                    break;
                            }
                    }
                    else if(ch=='/'){
                        while(1){
                            ch=fgetc(fp);
                            if(ch=='\n'||ch==EOF)
                                break;
                        }
                    }
            }
            else
            {
                    putc(ch,ft);
            }
    }
    fclose(fp);
    fclose(ft);
    return 0;
 }
