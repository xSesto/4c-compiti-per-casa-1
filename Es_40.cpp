#include <iostream>

using namespace std;

float m, q, x, y;
bool inters;

bool intersezione (float m,float q,float x,float y, bool inters)
{
	int g1, g2;
	g1=y;
	cout<<"G1= " <<g1 <<endl;
	g2=(m*x)+q;
	cout<<"G2= " <<g2 <<endl;
	if (g1==g2)
		return inters=true;
	else
		return inters=false;
}

int main ()
{	
	cout<<"Inserisci il coefficente angolare m: ";
	cin>>m;
	cout<<"Inserisci il termine noto q: ";
	cin>>q;
	
	cout<<"Inserisci l'ascissa del punto p: ";
	cin>>x;
	cout<<"Inserisci l'ordinata del punto p: ";
	cin>>y;
	system ("CLS");
	
	cout<<"Retta:  " <<"y=" <<m <<"x+" <<q <<endl;
	cout<<"Punto: P(" <<x <<";" <<y <<")" <<endl;
	
	if (intersezione (m,q,x,y,inters)==true)
		cout<<"Il punto appartiene alla Retta" <<endl;
	else
		cout<<"Il punto non appartiene alla Retta" <<endl;	
		
	
system ("PAUSE");
return 0;
}
