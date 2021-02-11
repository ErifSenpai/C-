#include <iostream>
#include <string>
#include <time.h>
/*
	* TavolaPitagorica = Tavola pitagorica con numeri casuale tra 1 e 10
	* Author: Michael Montanari
	* Date: 17 december 2020
*/
using namespace std;

void RiempiMatrice (int matrice[11][11], int valore, int m[11][11])
{
    for (int r=0; r<11; r++){
        for (int c=0; c<11; c++){
            valore = rand() % 10;
            matrice[r][c]= valore;
            m[r][c]=valore;
        }
    }
    matrice[0][0]=0;
    m[0][0]=0;
}
void SvuotaSpazio(int matrice[11][11], int m[11][11]){
    for (int r=1; r<11; r++){
        for (int c=1; c<11; c++){
            matrice[r][c]=0;
            m[r][c]=0;
        }
    }
}
void StampaMatrice(int matrice[11][11],int m[11][11])
{
    for (int r=0; r<11; r++){
            for (int c=0; c<11; c++)
            {
                cout<<matrice[r][c]<<" - ";
            }
            cout<<endl;
    }
    cout<<endl;
    for (int k=0; k<11; k++){
            for (int s=0; s<11; s++)
            {
                cout<<m[k][s]<<" - ";
            }
            cout<<endl;
    }

}
void FunzionePitagorica(int matrice[11][11], int m[11][11], int par){
    int s, z=0,t=0, a=1, rig=-1;
    for(int r=0; r<11; r++){
        for (int c=0; c<11; c++){
            matrice[r][c]=matrice[r][c]+matrice[0][c]*matrice[r][0];
            m[r][c]=m[r][c]+m[0][c]*m[r][0];
            cout<<matrice[r][c]<<" \t ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int k=0; k<11; k++){
            t=0;
            z=0;
        for (s=0; s<11; s++){
            cout<<m[k][s]<<"\t";
            if(k==0 & s==0)
                continue;
            if(k==0)
                continue;
            if(s==0)
                continue;
            else
                z=m[k][s];
                t=t+z;
        }
        rig=rig+1;
        if(a==1){
            cout<<"La somma della riga e' ";
            a=a+1;
        }
        if(rig==par)
            cout<<t;
        cout<<endl;
    }
}
int main()
{
    int m[11][11],s[11][11], p;
    srand(time(NULL));
    RiempiMatrice(m, 1, s);
    SvuotaSpazio(m,s);
    StampaMatrice(m,s);
    do{
        cout<<endl;
        cout<<"Di quale riga vuoi la somma?"<<endl;
        cin>>p;
    }while(p>10);
    system("cls");
    cout<<endl;
    FunzionePitagorica(m, s, p);
    cout<<endl;
    return 0;
}
