int BBI(int* V, int i, int d, int x)
{
	int centro;
	bool encontrado=false;
	
	while((i<=d)&&(!encontrado))
	{
		centro=(i+d)/2;
		if(V[centro]==x) return true;
		else
			if(v[centro]>x) d=centro-1;
			else i=centro+1;
	}
	if(encontrado) return centro;
	else return -1;
}
