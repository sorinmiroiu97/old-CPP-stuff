#include <iostream>

using namespace std;
float s,o,m,mi,nano;
int main()
{

    cout<<"Introdu valoarea pentru secunde = ";
    cin>>s;

    o = s / 3600;
    m = s / 60;
    mi = s * 1000;
    nano = s * 1000000000;
    cout<<"Sunt "<<o<<" ore."<<endl;
    cout<<"Sunt "<<m<<" minute."<<endl;
    cout<<"Sunt "<<mi<<" milisecunde."<<endl;
    cout<<" Sunt "<<nano<<" nanosecunde."<<endl;
    return 0;
}

