#include <iostream>
using namespace std;
int x;
int main()
{
    cout<<"Alegeti problema:"<<endl;
    cout<<"1.MEDIA ARITMETICA A ELEMENTELOR DIN TABLOU CUPRINSE INTRE 2 VALORI A SI B\n";
    cout<<"2.MIN SI MAX DINTR-O MATRICE\n";
    cin>>x;
    if(x==1)
    {
    int n,a,b,x[100],i,nr=0,s=0,ma;
    cout<<"Ati ales prima problema:\n";
    cout<<"1.MEDIA ARITMETICA A ELEMENTELOR DIN TABLOU CUPRINSE INTRE 2 VALORI A SI B\n";
    cout<<"Introduceti nr de elemente din vector n=";
    cin>>n;
    cout<<"Introduceti elementele din vector:";
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    cout<<"Introduceti valorile intre care se va calcula media aritmetica:\n";
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    for(i=1;i<=n;i++)
    {
        if(x[i]>=a&&x[i]<=b)
        {
        s+=x[i]; nr++;
        }
    }
    ma=float(s/nr);
    cout<<"Media aritmetica este: "<<ma;
    }
    if(x==2)
    {
        int n,m,i,j,a[100][100],mini,maxi;
        cout<<"Ati ales a doua problema:\n";
        cout<<"2.MIN SI MAX DINTR-O MATRICE\n";
        cout<<"Introduceti dimensiunea matricei:\n";
        cout<<"Introduceti nr de linii: ";
        cin>>n;
        cout<<"Introduceti nr de coloane: ";
        cin>>m;
        cout<<"Introduceti elementele matricei:\n";
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
        }
        mini=a[1][1];
        maxi=a[1][1];
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
            {
                if(a[i][j]<mini) mini=a[i][j];
                if(a[i][j]>maxi) maxi=a[i][j];
            }
            cout<<endl;
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
            {
                if(a[i][j]==mini)
                cout<<"Mini= "<<mini<<" pe pozitia: "<<"a["<<i<<"]["<<j<<"] in matrice\n";
                if(a[i][j]==maxi)
                cout<<"Maxi= "<<maxi<<" pe pozitia: "<<"a["<<i<<"]["<<j<<"] in matrice\n";

            }
    }
    return 0;
}
