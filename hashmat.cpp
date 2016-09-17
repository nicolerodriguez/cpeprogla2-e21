/* NICOLE Y. RODRIGUEZ
E21 (CPEPROGLA2) */

#include<iostream>
#include<cmath>
using namespace std;
int n[3],i,c,s;
int main()
{
	for(i=0;i<3;i++)
	{
		cin>>c>>s;
		n[i]=abs(c-s);
	}
	cout<<endl<<n[0]<<endl<<n[1]<<endl<<n[2]<<endl;
	return 0;
}
