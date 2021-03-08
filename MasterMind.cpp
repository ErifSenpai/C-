/*
*   MasterMind.cpp
*   Author: Dominique Bitetti
*   Date: 05/03/21
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Mastermind
{
    private:
    int map[5];
    int test[5];

    void init()
    {
        srand (time(NULL));
        for (int i=0; i<5; i++)
        {
            int k = (rand () % 10)+1;
            for(int j=0; j<i; j++){
                if(map[j]==k){
                    k = (rand () % 10)+1;
                    j=0;
                }
                else
                    map[i]=k;
            }
        }
    }

    public:
    Mastermind ()
    {
        init();
    }

    void stampa ()
    {
        for (int i=0; i<5; i++)
        {
            cout<<map[i]<<"\t";
        }
        cout<<endl;
    }

    void play()
    {
        cout<<"Inserisci 5 numeri interi"<<endl;
        for (int i=0; i<5; i++){
            cin>>test[i];
            for (int j=0; j<i; j++){
                if (test [i]== test[j]){
                    cout <<"ERRORE: NUMERO RIPETUTO" <<endl;
                    cout <<"inserire un numero diverso dal/i precedenti: ";
                    cin>>test [i];
                }
            }
        }
        for (int i=0; i<5; i++)
        {
            cout<<test[i]<<"\t";
        }
    }

    bool check()
    {
        int strike=0, ball=0;
        for (int i=0; i<5; i++)
        {
            for (int j=0; j<5; j++)
            {
                if (test[i]==map[j])
                {
                    if (i==j)
                    {
                        strike++;
                    }
                    else
                    {
                        ball++;
                    }
                }
            }
        }
        cout<<endl<<"Strike: "<<strike<<endl<<"Ball: "<<ball<<endl;
        return strike==5;
    }

};

int main()
{
    cout<<"Programma Mastermind avviato"<<endl;
    Mastermind m;

    m.stampa();
    do
    {
        m.play();

    }while(!m.check());

}