#include <iostream>
#include <string.h>
using namespace std;

float incasso, somma, media;
string nome;

float acquisizione (float incasso, float somma, float media, string nome)
{
    int i;
    int o;
    i=1;
    do
    {
    cout<<"Reparto " <<i <<": ";
    cin>>nome;
    cout<<"Incasso: ";
    cin>>incasso;
    somma=somma+incasso;
    media=somma/i;
    cout<<"Altro?(0=SI): ";
    cin>>o;
    i++;
    } while (o==0);
    return media;
    
}

int main()
{
    cout<<"La media e: " <<acquisizione (incasso, somma, media, nome);
    system ("PAUSE");
    return 0;
}