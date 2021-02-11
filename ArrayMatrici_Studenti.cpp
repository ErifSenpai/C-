#include <iostream>
#include <time.h>
#include <string>
#include <stdlib.h>

//Per il/i prof.: Continua a convertirmi i char in ascii, cercherò di risolvere

/*
	* 
	* Author: Michael Montanari
	* Date: 22 january 2021
*/
using namespace std;

/*int random(){
	int r=(rand()%10)+1;
}*/

char materie[5]={'I','M','S','G','T'};
char cognomi[24]={'A','B','C','D','E','F','G','H','I','K','L','M','N','O','P','Q','R','S','T','U','V','X','Y','Z'};

void RiempiMatrice (int N, int matrice[1][6], int valore, int m[1][6])
{
    for (int r=1; r<N; r++){
        for (int c=0; c<6; c++){
            valore = rand() % 10+1;
            matrice[r][c]= valore;
            m[r][c]=valore;
        }
    }
    matrice[0][0]=0;
    m[0][0]=0;
}

void SvuotaSpazio(int N, int matrice[1][6], int m[1][6]){
    for (int r=0; r<N; r++){
        for (int c=0; c<6; c++){
            matrice[r][c]=0;
            m[r][c]=0;
        }
    }
}

void RiempiColonne(int matrice[1][6], int m[1][6]){
	int k=0;
	for (int r=0; r<1; r++){
		for(int c=1; c<6; c++){
			matrice[r][c]=materie[k];
			m[r][c]=materie[k];
			k++;
		}		
	}
}

void RiempiRighe(int N, int matrice[1][6], int m[1][6]){
	int k=0;
	int valore;
	for (int r=0; r<N; r++){
			valore = rand() % 24+1;
			matrice[r][0]=materie[k];
			m[r][0]=materie[k];
			k++;
	}		
}

void StampaMatrice(int N, int matrice[1][6], int m[1][6])
{
    for (int r=0; r<N; r++){
            for (int c=0; c<6; c++)
            {
                cout<<matrice[r][c]<<" - ";
            }
            cout<<endl;
    }
    cout<<endl;
    for (int k=0; k<N; k++){
            for (int s=0; s<6; s++)
            {
                cout<<m[k][s]<<" - ";
            }
            cout<<endl;
    }
}

int main()
{
	int st;
	do{
		cout<<"Quanti studenti ci sono?"<<endl;
		cin>>st;
	}while(st==0);
	st++;
    int m[st][6],s[st][6], p, k;
    srand(time(NULL));
    RiempiMatrice(st, m, 1, s);
    
    RiempiColonne(m,s);
    RiempiRighe(st,m,s);
    StampaMatrice(st,m,s);
    cout<<endl;
    cout<<endl;
    return 0;
}
