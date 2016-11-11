#include <iostream>
#include <string.h>
using namespace std;

string cand1, cand2;
float vot1, vot2;
float perc1, perc2;

float percentuale (float& vot1, float& vot2);

int main()
{
    cout<<"Inserisci il primo candidato: ";
    cin>>cand1;
    cout<<"Inserisci i voti del primo candidato: ";
    cin>>vot1;
    
    cout<<"Inserisci il secondo candidato: ";
    cin>>cand2;
    cout<<"Inserisci i voti del secondo candidato: ";
    cin>>vot2;
    
    percentuale (vot1, vot2);
    perc1=vot1;
    perc2=vot2;
    
    if (perc1>perc2)
    {
        cout<<"1)  "  <<cand1 <<'\\t' <<perc1 <<endl;
        cout<<"2)  "  <<cand2 <<'\\t' <<perc2 <<endl;
    }
    else
    {
        cout<<"1)" <<'\\t' <<cand2 <<'\\t' <<perc2 <<endl;
        cout<<"2)" <<'\\t' <<cand1 <<'\\t' <<perc1 <<endl;
    }

  system ("PAUSE");
  return 0;
}

float percentuale (float& vot1, float& vot2)
{
    int sommavot;
    sommavot=vot1+vot2;
    vot1=(100*vot1)/sommavot;
    vot2=(100*vot2)/sommavot;
    return vot1;
    return vot2;
}
