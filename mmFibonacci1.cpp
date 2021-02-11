/*
 *Fibonacci.cpp
 *Michael Montanari
*/
#include <iostream>
using namespace std;

int i, nVolte, nUno=1, nDue=1, nTre;

int main () {
     
	while (nVolte<=3)
	{
	    cout<<"Inserisci un numero maggiore di tre: ";
	    cin>>nVolte;
    } 
    cout<<nUno<<"-"<<nDue;
    for(i=2;i<nVolte;i++)
	{
    	nTre=nUno+nDue;
        nUno=nDue;
        nDue=nTre;
        cout<<"-"<<nTre;
    }

    return 0;
}

