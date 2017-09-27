#include <iostream>
#include <cstring>
using namespace std;
char s[101],c[]="aeiou";
int i;
int main()
{
/*
    cin.get(s,101);
    cin.get();
    for(i=0; i<strlen(s); i++)
    {
        if(strchr(c,s[i])!=0) s[i]=s[i]+1;
    }

    cin>>s;
    while(i<strlen(s))
    {
        if(strchr(c,s[i])==0)
            strcpy(s+i,s+i+1);
        else i++;


    cin>>s;
    for(i=0; i<strlen(s); i++)
    {
        for(int j=0; j<=i; j++)
            cout<<s[j]; cout<<endl;
    }

    char c1,c2;
    cout<<"c1= "; cin>>c1;
    cout<<"c2= "; cin>>c2;
    cout<<"introduceti sirul de caractere: ";
    cin.get();
    cin.get(s,101);
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]==c1) s[i]=c2;
        else if(s[i]==c2) s[i]=c1;
    }
    */
    cout<<s;
    return 0;
}
