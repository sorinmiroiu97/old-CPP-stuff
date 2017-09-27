#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char cuv1[50], cuv2[50],  aux;
    int i, j, n;

    cout << "Primul cuvant: ";
    cin >> cuv1;
    cout << "Al doilea cuvant: ";
    cin >> cuv2;

    if (strlen(cuv1) == strlen(cuv2)) {
        n = strlen(cuv1);
        for (i = 0; i < n - 1; i++) {
            for (j = i + 1; j <= n - 1; j++) {
                if (cuv1[i] > cuv1[j]) {
                    aux = cuv1[i];
                    cuv1[i] = cuv1[j];
                    cuv1[j] = aux;
                }
            }
        }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j <= n - 1; j++) {
            if (cuv2[i] > cuv2[j]) {
                aux = cuv2[i];
                cuv2[i] = cuv2[j];
                cuv2[j] = aux;
            }
        }
    }
}

    if (strcmp(cuv1, cuv2) == 0) cout << "Sunt anagrame" << endl;
    else cout << "Nu sunt anagrame" << endl;
    cout << endl;

    return 0;
}
