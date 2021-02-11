#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*
	* BattleShipOne = Battaglia navale contro un computer
	* Author: Michael Montanari
	* Date: 4 december 2020
	* 0 = empty ; 1 = ship ; 2 = bomb ; 3 = strike
*/
bool VuoiGiocare(){
	char c;
	do {
		cout<<"Vuoi Giocare? (s/n): ";
		cin>>c;
		cout<<endl;
	}while(c != 's' && c != 'n');
	if(c == 's')
		return true;
	if(c == 'n')
		return false;
}

void initialize(int v[], int l){
	for(int i=0; i<l; i++)
		v[i]=0;
}

void ShowMap(int v[], int l){
	cout<<"Caselle delle cordinatate"<<endl;
	for(int i=0; i<l; i++)
		cout<<i<<"\t";
	cout<<endl;
	cout<<endl;
	for(int i=0; i<l; i++){
		switch(v[i]){
			case 0:
				cout<<"O\t";
				break;
			case 1:
				cout<<"X\t";
				break;
			case 2:
				cout<<"-\t";
				break;
			case 3:
				cout<<"*\t";
		}
	}
	cout<<endl;
}

void ArrangeShip(int v[], int l){
	srand(time(NULL));
	for(int i=0;i<2;i++)
	{
	int n=rand()%(l-1);
	if(i==0)
		v[n]=1;
	if(i==1)
		v[n]=1;
	if(i==2)
		break;
	}

}

void LaunchTheBomb(int v[], int l){
	int pos=-1;
	while(pos<0 || pos>=l){
		cout<<"Inserire le cordinate del bombardamento (0..."<<l-1<<"): ";
		cin>>pos;
	}
	if(v[pos]==0)
		v[pos]=2;
	if(v[pos]==1)
		v[pos]=3;
}

bool WeWon(int v[], int l){
	for(int i=0; i<l; i++){
		if(v[i]==1)
		{
			return true;
		}
	}
	return false;
}

void MapCleaner(int v[], int l){
	for(int i=0;i<l;i++){
		if(v[i]==1){
			v[i]=0;
		}
		else
			break;
	}
}
int main() {
	int num_bomb;
	while(VuoiGiocare()==true){
		system("cls");
		const int MAPLENGTH = 10;
		int map[MAPLENGTH];
		MapCleaner(map,MAPLENGTH);
		//Richiamiamo la funzione di inizializzazione
		initialize(map,MAPLENGTH);
		//Posizioniamo le navi
		ArrangeShip(map,MAPLENGTH);
		//Mostriamo la mappa di gioco
		ShowMap(map, MAPLENGTH);
		//Facciamo lanciare le bombe al player
		while(true){
			num_bomb++;
			LaunchTheBomb(map, MAPLENGTH);
			ShowMap(map,MAPLENGTH);
			if(WeWon(map,MAPLENGTH)==false){
				cout<<"VICTORY"<<endl;
				cout<<"Bravo li hai distrutti tutti"<<endl;
				break;
			}
		}
		if(num_bomb<=3)
		{
		cout<<"Perfetto hai lanciato solo "<<num_bomb<<" bombe"<<endl;
		}
		if(num_bomb>3)
		{
		cout<<"Bene hai lanciato "<<num_bomb<<" bombe"<<endl;
		}
		if(num_bomb>=6)
		{
		cout<<"Ci hai messo tanto, hai lanciato "<<num_bomb<<" bombe"<<endl;
		}
	}
	cout<<"Gioco terminato"<<endl;
}

