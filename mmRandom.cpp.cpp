/*
 *Random.cpp
 *Michael Montanari
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <Windows.h>
using namespace std;

int cont=0, num,n;

int GeneraRandom()
{
	return (rand());
}

int main ()
{
	srand(time(NULL));
	cout<<"Inserisci un numero?\nInserisci un numero da 1 a 100: ";
	cin>>num;
	while(num<=0 || num>=101)
		{
		cout<<"Inserisci un numero tra 1 e 100: ";
		cin>>num;
		}
	while(n!=num)
	{
		cont=cont+1;
		n=GeneraRandom();
		cout<<"Il "<<cont<<" numero e'"<<n<<endl;
	}
	return 0;
}


