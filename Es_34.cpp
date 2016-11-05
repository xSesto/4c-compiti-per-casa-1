#include <iostream>

using namespace std;


int n;

void succesivo (int n)
{
	int p;
	p=n+5;
	do
	{
		n++;
		cout<<n <<'\t';	
		
	} while (n!=p);
}

int main ()
{	
	cout<<"Inserisci il numero: ";
	cin>>n;
	
	succesivo (n);
	
    
system ("PAUSE");
return 0;
}
