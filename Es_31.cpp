#include <iostream>
#include <string.h>

using namespace std;

string nome;

void stampa (string nome)
{
    cout<<nome <<endl <<endl;
    cout<<nome <<endl <<endl;
    cout<<nome <<endl <<endl;
}

int main ()
{
    cout<<"Inserisci stringa: ";
    cin>>nome;
	cout<<endl;	
		
    stampa (nome);
    
system ("PAUSE");
return 0;
}
