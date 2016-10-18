int BBR(int* V, int i, int d, int x)
{
	int centro;
	
	if(i<=d)
	{
		centro = (i+d)/2;
		if(V[centro]==x)
		return true;
		else
		{
			if(V[centro]>x)
			return BBR(V,i,centro-1,x);
			else
			return BBR(V,centro+1,d,x);
		}
	}
	else
	return -1;
}


