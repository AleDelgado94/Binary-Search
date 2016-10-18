#include <iostream>
#include <cstdlib>

using namespace std;


int Hash(int valor, int t)
{
	int y;
	int d=0;
	int x=valor;
	
	while(x>0)
	{
		y = x % 10;
		d= d + y;
		x = x / 10;
	}
	return (d % t);
}

int hash_(int valor, int t)
{
	srand(valor);
	return rand() % t;
}

///   EL TAMAÑO DE LA TABLA DEBE SER PRIMO   ////


int main()
{
	cout << Hash(14,13)<<endl;
	
	cout << hash_(3,20);
}
