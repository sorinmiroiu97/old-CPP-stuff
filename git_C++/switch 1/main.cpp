#include <iostream>
using namespace std;
int a,b;
char x;
int main()
{
    cin>>a>>b;
    do{
        cout<<"1.Adunare"<<endl;
        cout<<"2.Diferenta"<<endl;
        cout<<"3.Produs"<<endl;
        cout<<"4.Impartire"<<endl;
        cout<<"5.Modare"<<endl;
        cout<<"6.Iesire(x)"<<endl;
        switch(x){
        case '+': cout<<a+b;break;
        case '-': cout<<a-b;break;
        case '*': cout<<a*b;break;
        case '/': cout<<a/b;break;
        case '%': cout<<a%b;break;
        default:cout<<"Alege "
        }
    }
    return 0;
}
