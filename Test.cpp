#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *fp1,*fp2;
    fp1=fopen("input.txt","r");
    fp2=fopen("output.txt","w");

    char ch;
    int t=0;
    while(cin>>ch)
    {
        t=0;
        if(ch=='/'){
            cin>>ch;
            if(ch=='*')
            {
                while(cin>>ch)
                {
                    if(ch=='*'){
                        cin>>ch;
                        if(ch=='/')
                            t=1;
                    }
                    if(t)
                        break;
                }
            }
            if(t==0)
                cout<<'/'<<ch;
        }
        else
            cout<<ch;
    }


    return 0;
}

