#include <iostream>
using namespace std;

int visit;
float p, ps;

int main ()
{
	cout<<"Inserire il prezzo del biglietto: ";
	cin>>p;
	while(p<=0)
	{
		system("cls");
		cout<<"Inserire un prezzo maggiore di 0"<<endl;
		cout<<endl<<"Inserisci il prezzo: ";
		cin>>p;
	}
	cout<<"Inserisci la tipologia di visitatore:\n1)Studente (50% di sconto)\n2)Pensionato (30% di sconto)\n3)Cittadini di Bologna (25% di sconto)\n4)Portatori di Handicap (Entrata libera)\n5)Visitatore generico (Nessuno sconto)"<<endl;
	cin>>visit;
	switch(visit)
	{
		case 1:

			ps=(p*50)/100;
			p=p-ps;
			cout<<"Il prezzo e' di "<<p<<" euro";
			break;

		case 2:

			ps=(p*30)/100;
			p=p-ps;
			cout<<"Il prezzo e' di "<<p<<" euro";
			break;

		case 3:

			ps=(p*25)/100;
			p=p-ps;
			cout<<"Il prezzo e' di "<<p<<" euro";
			break;


		case 4:

			cout<<"L'entrata e' libera per lei";
			break;

		case 5:

			cout<<"Lei non ha diritto a nessuno sconto";
			break;
	}
	return 0;
}

