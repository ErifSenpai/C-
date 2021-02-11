/*
 *Voto2Giudizio.cpp
 *Michael Montanari
*/
#include <iostream>
using namespace std;

int voto;

int main ()
{
	do{
		cout<<"Inserisci un numero maggiore di 3: ";
		cin>>voto;	
	}while(voto<=3 || voto>=11);
	if(voto>=4 && voto<=5)
		cout<<"Insufficiente";
	if(voto>=6 && voto<=7)
		cout<<"Sufficiente";
	if(voto>=8 && voto<=9)
		cout<<"Ottimo";
	if(voto==10)
		cout<<"Perfetto";
}

