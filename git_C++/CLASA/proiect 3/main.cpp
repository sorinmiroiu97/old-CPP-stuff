#include <fstream>

using namespace std;
ifstream f("ecutie.in");
ofstream g("ecuatie.out");
float a,b;

int main()
{
    f>>a>>b;
    if(a==0)g<<"Inf.sol";
    else
        g<<"Impos";
    else g<<(-b/a);

    return 0;
}
