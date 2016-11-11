#include <iostream>
#include <string.h>
using namespace std;

float incasso, somma, media;
string nome;
int i;

float acquisizione (float incasso, float& somma, string nome)
{
    int o;
    i=1;
    do
    {
    cout<<"Reparto " <<i <<": ";
    cin>>nome;
    cout<<"Incasso: ";
    cin>>incasso;
    somma=somma+incasso;
    cout<<"Altro?(0=SI): ";
    cin>>o;
    i++;
    } while (o==0);
    return somma;
}

float mediatotale (float media,float& somma, int& i)
{
    cout<<"Somma: " <<somma <<endl;
    cout<<"I: " <<i <<endl;
    media=somma/i;
    return media;
}    


int main()
{
    cout<<"La somma e': " <<acquisizione (incasso, somma, nome) <<endl;
    i--;
    cout<<"La media e': " <<mediatotale (media, somma, i);
    system ("PAUSE");
    return 0;
}
