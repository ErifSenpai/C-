/*
 *skeleton.cpp
 *Michael Montanari
 */
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <Windows.h>
using namespace std;

int cont=3, num,n;

int GeneraRandom()
{
	return (rand()%10)+1;
}

int main ()
{
	char r;
	srand(time(NULL));
	GeneraRandom();
	n=GeneraRandom()+0;
	cout<<"Benvenuto in indovina il numero tra 1 e 10"<<endl;	
	cout<<"Hai solo tre tentativi, vuoi cominiciare? (s/n)"<<endl;
	do
	{
		cout<<"Inserisci s o n!"<<endl;
		cin>>r;	
	}
	while(r!='s' && r!='n');
	if(r=='s')
	{
		while(cont>0)
		{
			system("cls");
			do
			{
			cout<<"Inserisci un numero tra 1 e 10.\nTi rimangono "<<cont<<" tentativi"<<endl;
			cin>>num;
			}
			while(num>10);
			cont=cont-1;
			if(num==n)
			{
				cout<<"Hai vinto, il numero era: "<<num;
				break;
			}
			else
				continue;
		}
		if(cont==0 && num!=n)
			cout<<"Game Over\nIl numero era: "<<n<<endl<<"Ritenta sarai piu' fortunato";
	}
	if(r=='n')
		cout<<"Nemmeno ci hai provato...";

}


