#include <iostream>

using namespace std;

int main()
{
    int ionel;
    cout << "Scrieti pe ce loc este Ionel:";cin >> ionel;
    while(ionel<0){
    cout << "Scrieti pe ce loc este Ionel:";cin >> ionel;
    }
    if(ionel<=25)
        cout << "Ionel primeste tricou de culoare alba" << endl;
    else if((ionel >25)&&(ionel <=50))
        cout << "Ionel primeste tricou de culoare rosie" << endl;
    else if((ionel >50)&&(ionel <=75))
        cout << "Ionel primeste tricou de culoare albastra" << endl;
    else if((ionel >75)&&(ionel <=100))
        cout << "Ionel primeste tricou de culoare neagra" << endl;

    return 0;
}
