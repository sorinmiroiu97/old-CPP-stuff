#include <iostream>

using namespace std;

int main() 
{
	int i, j, n, m, a[100][100], aux, p;

	cout << "linii: "; cin >> n;
	cout << "coloane: "; cin >> m;


	//citire matrice
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
	cout << endl;


	//afisare matrice
	for (i = 1; i <= n; i++) {
		cout << endl;
		for (j = 1; j <= m; j++) {
			cout << a[i][j] << " ";
		}
	}


	//ordonare coloane matrice
	for (p = 1; p <= m; p++)
		for (i = 1; i<n; i++)
			for (j = i + 1; j <= n; j++)
				if (a[i][p]<a[j][p])
				{
					aux = a[i][p];
					a[i][p] = a[j][p];
					a[j][p] = aux;
				}


	//afisare matrice ordonata
	cout << endl;
	cout << endl;
	for (i = 1; i <= n; i++) 
	{
		cout << endl;
		for (j = 1; j <= m; j++) 
		{
			cout << a[i][j] << " ";
		}
	}

	return 0;
}
