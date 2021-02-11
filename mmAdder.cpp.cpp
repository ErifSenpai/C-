/*
Michael Montanari
Adder.cpp
*/
#include <iostream>
#include <windows.h>
using namespace std;

int num=-1, numw=1;

int main ()
{
{
	while(numw!=0)
		{
		num=num+numw;
		cout<<"Inserisci un numero, ATTENZIONE QUANDO SI SCRIVE 0 IL PROGRAMMA FINISCE"<<endl;
		cin>>numw;
		system("cls");
		}
	cout<<"Il numero finale e' "<<num<<endl;
	return 0;
}	
}

