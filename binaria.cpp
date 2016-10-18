#include <iostream>
#include "array.h"

using namespace std;

template<class T>
int busqueda_binaria(Array<T> &ar, T dato)
{
	int f=ar.get_size();
	int i=0;
	int pos=i;
	
	while(i<f)
	{
		pos = (i+f)/2;
		
		if(ar[pos]==dato)
		return pos;
		else
		{
			if(ar[pos]<dato)
			    i = pos + 1;
	        else
	       		f = pos - 1;   
		}
			
	}
	
	if(ar[i]==dato)
 	   return i;
    return -1;
	
}


int main()
{
	Array<int> a(10);
	
	for(int i=0;i<10;i++)
	a[i]=i;
	
	a.imprimir();
	
	cout << busqueda_binaria(a,3);
}

