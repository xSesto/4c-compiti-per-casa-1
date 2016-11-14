#include <iostream>
#include <stdlib.h>

using namespace std;

int a[10], i, somma;

int main()
{
    for (i=0; i<10; i++)
    {
        cout<<"Inserisci il: " <<i+1 <<" elemento: ";
        cin>>a[i];     
    }
    system ("CLS");
    
    for (i=0; i<10; i++)
    {
        cout<<a[i] <<'\t';    
    }
    cout<<endl;
    
    for (i=0; i<10; i++)
    {
        if (a[i]>5)
            somma=somma+a[i];    
    }
    
    cout<<"La somma e': " <<somma <<endl <<endl;
    
  system("PAUSE");
  return 0;
  
}