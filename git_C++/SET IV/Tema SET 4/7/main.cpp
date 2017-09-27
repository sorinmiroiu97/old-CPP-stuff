#include <iostream>

using namespace std;
int n,i,v[100];
float nr1,nr2,s1,s2;
int main()
{
    cout <<"Introduceti numarul de zile n=";
    cin>>n;
    cout<<"Introduceti temperaturile pentru cele "<<n<<" zile:"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    for(i=1;i<=n;i++)
    {
        if(v[i]>0)
        {
           nr1++;
           s1=s1+v[i];
        }
        else
        {
            nr2++;
            s2=s2+v[i];
        }
    }
    if(nr1==0)
    cout<<"Nu exista temperaturi pozitive.";
    else
    cout<<"Media temperaturilor pozitive:"<<s1/nr1<<endl;
    if(nr2==0)
    cout<<"Nu exista temperaturi negative.";
    else
    cout<<"Media temperaturilor negative:"<<s2/nr2<<endl;
    return 0;
}
