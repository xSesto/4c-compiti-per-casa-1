#include <iostream>
using namespace std;
int numeri[10];
int maggiore;
int i;
int main(){
    maggiore=0;
    for(i=0;i<10;i++){
        cout<<"inserisci il numero: "<<i+1<<"    ";
        cin>>numeri[i];
    if(numeri[i]>5){
        maggiore=maggiore+1;}
        else{
            maggiore=maggiore;
        };
    };
    
    cout<<"la somma dei 10 numeri"<<"    "<<maggiore;
    return 0;
}
