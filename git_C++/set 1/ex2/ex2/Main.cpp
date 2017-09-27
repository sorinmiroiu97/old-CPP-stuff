#include <iostream>
#include <time.h>

using namespace std;

void read(int[], int);
void write(int[], int);
void inserare(int[], int);
void min_sort(int [], int);
void bubble_sort(int [], int);
void inserare_binara(int[], int);
void numarare(int [], int);

int main()
{
	int a[100], n, x;

	cout << "n= ";
	cin >> n;

	read(a,n);
	write(a, n);

	cout << "1. Bubble sort" << endl;
	cout << "2. Insertie binara" << endl;
	cout << "3. Numarare" << endl;
	cout << "4. Insertie directa" << endl;
	cout << "5. Prin aflarea minimului" << endl;

	cout << "x= ";
	cin >> x;
	
	switch (x)
	{
	case 1: bubble_sort(a, n); break;
	case 2: inserare_binara(a, n); break;
	case 3: numarare(a, n); break;
	case 4: inserare(a, n); break;
	case 5: min_sort(a, n); break;
	}
	
	write(a, n);

	return 0;
}

void bubble_sort(int a[50], int n)
{
	int i, aux, ok;
	do {
		ok = 1;
		for (i = 0; i<n - 1; i++) {
			if (a[i]>a[i + 1]) {
				ok = 0;
				aux = a[i];
				a[i] = a[i + 1];
				a[i + 1] = aux;
			}
		}
	} while (ok != 1);
	cout << endl;
}

void read(int a[100], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}

	cout << endl;

}

void write(int a[100], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i]<<" ";
	cout << endl;
}

void inserare(int a[100], int n) 
{
	int i, j, x;
	for (i = 2; i <= n; i++) 
	{
		x = a[i];
		j = i - 1;
		while (j >= 1 && a[j]>x) 
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = x;
	}
}

void inserare_binara(int a[50], int n) 
{
	int i, j, st, dr, aux, m;
	for (i = 2; i <= n; i++) 
	{
		aux = a[i];
		st = 1;
		dr = i - 1;
		while (st <= dr) 
		{
			m = (st + dr) / 2;
			if (aux <= a[m])
				dr = m - 1;
			else
				st = m + 1;
		}
		for (j = i; j >= st + 1; j--) 
		{
			a[j] = a[j - 1];
		}
		a[st] = aux;
	}
}

void numarare(int a[50], int n)
{
	int i, j, b[100], c[100];

	for (i = 1; i <= n; i++) 
	{
		b[i] = 0;
		for (j = 1; j <= n; j++)
			if (a[j]<a[i])
				b[i]++;
	}
	for (i = 1; i <= n; i++)
		c[b[i] + 1] = a[i];
}

void min_sort(int a[100], int n)
{
	int i, aux, j;
	for (i = 1; i <= n - 1; i++)
		for (j = i + 1; j <= n; j++)
			if (a[i] > a[j]) 
			{
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
	return;
}