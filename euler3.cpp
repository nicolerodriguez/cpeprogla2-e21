#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

int main ()
{
	int n, i, sum=0;
	ifstream f("sample.txt");
	FILE *fp;
	fp = fopen("sample.txt", "r");
	
	if(!fp){
            cout << "Cannot open file";
            system("pause");
            exit(1);        
    }
    while (f >> n)
    {
    	for (i=0; i<n; i++)
    	{
    		if ((i%3==0) || (i%5==0))
    			sum+=i;
    			
		}cout << sum << endl;
	}
	system("pause");
    return 0;
}
