/*
 *MinOfThree.cpp
 *Michael Montanari
*/
#include<iostream>
using namespace std;
int a,b,c;
int main() {
	
	cout<<"Inserisci il primo numero: ";
	cin>>a;
	cout<<"Inserisci il secondo numero: ";
	cin>>b;
	cout<<"Inserisci il terzo numero: ";
	cin>>c;
	
	if(a<b)
		if(a<c)
	    		cout<<"Il numero minore e': "<<a;
	    	else
	    		cout<<"Il numero minore e': "<<c;
	else 
		if (b<c)
	    		cout<<"Il numero minore e': "<<b;
		else
			cout<<"Il numero minore e': "<<c;
	return 0;
}
