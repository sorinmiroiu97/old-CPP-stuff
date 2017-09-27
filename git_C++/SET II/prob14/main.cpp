#include <iostream>
using namespace std;
float x;
int main()
{
    cout << "Dati o valoare lui x: ";cin >> x;
    if(x<=-3){
        x=x*x+1;
    cout << "Valoarea lui x este: "<< x << endl;
    }
    else if((x>-3)&&(x<3)){
        x=x-2;
    cout << "Valoarea lui x este: "<< x << endl;
    }else if(x>=3){
        x=x*x-4*x+5;
    cout << "Valoarea lui x este: "<< x << endl;
    }
    return 0;
}
