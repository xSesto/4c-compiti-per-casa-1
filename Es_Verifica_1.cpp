#include <iostream>
#include <stdlib.h>

using namespace std;

int n, i, j, V[10], cont, vcont;


int main()
{
    do
    {
    cout<<"Inserisci dimensione array (da 2 a 50): ";
    cin>>n;
    } while (n<2 || n>50);
    system ("CLS");
    
    for (i=0; i<n; i++)
    {
       cout<<"Inserisci il " <<i+1 <<" valore: ";
       cin>>V[i];
    }
    system ("CLS");
    
    cout<<"L'array e': " <<endl;
    for (i=0; i<n; i++)
    {
       cout<<V[i] <<'\t';
    }
    cout<<endl <<endl;
    
    cont=0;
    for (i=0; i<n; i++)
    {
        for (j=i; j<n; j++)
        {
            if (V[i]>=V[j])
            {
                cont++;    
            }
        }
        
        cout<<"cont [" <<i <<"]: " <<cont <<endl;
        cout<<"vcont [" <<i <<"]: " <<vcont <<endl <<endl;
        
        if (i==0)
        {
            vcont=cont;
        }
        if (cont>=vcont)
        {
            vcont=cont;
        }
        cont=0;
        
        cout<<"cont [" <<i <<"]: " <<cont <<endl;
        cout<<"vcont [" <<i <<"]: " <<vcont <<endl <<endl;
    }
    
    cout<<"Gli Indici sono: " <<vcont <<endl;
    system ("PAUSE");
    return 0;
}
