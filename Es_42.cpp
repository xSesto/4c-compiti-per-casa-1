#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int n, i, o;
float percentuale;

struct prodotto
{
    string descrizione;
    float prezzo;
   
};

struct prodotto p[5];

float incremento (struct prodotto p[], int i);

int main()
{
   cout<<"Inserire il numero di prodotti: ";
   cin>>n;
   for (i=1; i<=n; i++)
   {    
        cout<<"Inserisci descrizione: ";
        cin>>p[i].descrizione;
        cout<<"Inserisci prezzo: ";
        cin>>p[i].prezzo;    
   }
   system("CLS");
   cout<<"Codice" <<'\\t' <<"Descrizione" <<'\\t' <<"Prezzo" <<endl;
   cout<<endl;
   for (i=1; i<=n; i++)
   {
      cout<<i <<'\\t' <<p[i].descrizione <<'\\t' <<p[i].prezzo <<endl;    
   }
   
   do
   {
     cout<<"Inserisci Il Codice: ";
     cin>>i;
     cout<<"Inserisci la percentuale: ";
     cin>>percentuale;
     cout<<"Il prezzo finale e': " <<incremento (p, i) <<endl;
     cout<<"Altro?(0=SI): ";
     cin>>o;
   
   } while (o==0);
   
   system("CLS");
   cout<<"Codice" <<'\\t' <<"Descrizione" <<'\\t' <<"Prezzo" <<endl;
   cout<<endl;
   for (i=1; i<=n; i++)
   {
      cout<<i <<'\\t' <<p[i].descrizione <<'\\t' <<p[i].prezzo <<endl;    
   }
   
   system("PAUSE");
   return 0;
}

float incremento (struct prodotto p[], int i)
{
    p[i].prezzo=p[i].prezzo+((p[i].prezzo*percentuale)/100);
    return p[i].prezzo;
   
}
