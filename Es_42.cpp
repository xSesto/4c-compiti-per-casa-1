{\rtf1\ansi\ansicpg1252\cocoartf1504
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;\csgray\c100000;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
#include <string>\
#include <stdlib.h>\
using namespace std;\
\
int n, i, o;\
float percentuale;\
\
struct prodotto\
\{\
    string descrizione;\
    float prezzo;\
   \
\};\
\
struct prodotto p[5];\
\
float incremento (struct prodotto p[], int i)\
\{\
    p[i].prezzo=p[i].prezzo+((p[i].prezzo*percentuale)/100);\
    return p[i].prezzo;\
   \
\}\
\
\
\
\
int main()\
\{\
   cout<<"Inserire il numero di prodotti: ";\
   cin>>n;\
   for (i=1; i<=n; i++)\
   \{    \
        cout<<"Inserisci descrizione: ";\
        cin>>p[i].descrizione;\
        cout<<"Inserisci prezzo: ";\
        cin>>p[i].prezzo;    \
   \}\
   system("CLS");\
   cout<<"Codice" <<'\\t' <<"Descrizione" <<'\\t' <<"Prezzo" <<endl;\
   cout<<endl;\
   for (i=1; i<=n; i++)\
   \{\
      cout<<i <<'\\t' <<p[i].descrizione <<'\\t' <<p[i].prezzo <<endl;    \
   \}\
   \
   do\
   \{\
     cout<<"Inserisci Il Codice: ";\
     cin>>i;\
     cout<<"Inserisci la percentuale: ";\
     cin>>percentuale;\
     cout<<"Il prezzo finale e': " <<incremento (p, i) <<endl;\
     cout<<"Altro?(0=SI): ";\
     cin>>o;\
   \
   \} while (o==0);\
   \
   system("CLS");\
   cout<<"Codice" <<'\\t' <<"Descrizione" <<'\\t' <<"Prezzo" <<endl;\
   cout<<endl;\
   for (i=1; i<=n; i++)\
   \{\
      cout<<i <<'\\t' <<p[i].descrizione <<'\\t' <<p[i].prezzo <<endl;    \
   \}\
   \
   system("PAUSE");\
   return 0;\
   \
\}\
}