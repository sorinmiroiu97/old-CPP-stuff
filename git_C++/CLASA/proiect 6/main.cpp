#include <iostream>
using namespace std;
int a,b;
char op;
int main()
{
    cin>>a>>b;
    do{
        cout<<"1.ADUNARE[+]"<<endl<<"2.SCADERE[-]"<<endl<<"3.INMULTIRE[*]"<<endl<<"4.CAT[/]"<<endl<<"5.REST[%]"<<endl<<"6.IESIRE[x];
        cout<<"OPTIUNEA:";cin>>op;
        switch (op);
    }
    {
    case'+'cout<<(a+b)<<endl;break;
    case'-'cout<<(a-b)<<endl;break;
    case'*'cout<<(a*b)<<endl;break;
    case'/'cout<<(a/b)<<endl;break;
    case'%'cout<<(a%b)<<endl;break;
    default:cout<<"alege+,-,*,/,%,x";
}

    return 0;
}
