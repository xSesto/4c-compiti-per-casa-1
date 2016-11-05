#include <iostream>

using namespace std;

float prezzo, perc_sconto, prezzo_scontato;

int sconto (float prezzo,float perc_sconto, float prezzo_scontato)
{
	prezzo_scontato=prezzo-((prezzo*perc_sconto)/100);
	return prezzo_scontato;
}

int main ()
{	
	cout<<"Inserisci il Prezzo del Prodotto: ";
	cin>>prezzo;
	
	cout<<"Inserisci lo Sconto: ";
	cin>>perc_sconto;
	cout<<endl;
	
	cout<<"Il prezzo del prodotto scontato e': ";
	cout<<sconto (prezzo,perc_sconto,prezzo_scontato) <<endl;
	
system ("PAUSE");
return 0;
}
