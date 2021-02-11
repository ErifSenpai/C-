#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

class Lista{
private:
    int l;
    string *data;
public:
    void sizeSvuota(int lunghezza){
        l=lunghezza;
        data=new string[l];
        for(int i=0;i<l;i++){
            data[i]="";
        }
    }

    int len(){
        return l;
    }
    int sv(){
        int c=0;
        for(int i=0;i<len();i++){
            if (data[i]!=""){
                c++;
            }
        }
        return c;
    }
    void add(string a, int q){
        for(int i=0;i<q;i++)
            data[sv()]=a;
    }
    string read(int i){
        return data[i];
    }
    void write(string a, int i){
        if(data[i]==" "){
            cout<<"Non puoi sovrascrivere una casella vuota"<<endl;
        }
        else{
            data[i]="";
            data[i]=a;
        }

    }
    void paint(){
        int k=0;
        for(int i=0;i<len();i++){
        	int v=(rand()%20)+1;
        	while(v>0){
        	 	cout<<data[i];
                v--;	
			}
			cout<<endl; 
        }
    }
    void print(){
        for(int i=0;i<len();i++){
            cout<<data[i]<<" ";
        }
    }
};

int main()
{
	srand(time(NULL));
    int i=0, k=0, q=0, index=0;
    string a;
    Lista l;
    do{
        cout<<"Quanti spazi vuoi inserire? ";
        cin>>i;
    }while(i<0);
    l.sizeSvuota(i);
    index=i;
    while(i>k){
        cout<<"Quante volte e cosa vuoi inserire come carattere?"<<endl;
        do{
            cout<<"Quantita': ";
            cin>>q;
        }while(q>index);
        index=index-q;
        cout<<"Carattere: ";
        cin>>a;
        l.add(a,q);
        k=k+q;
    }
    l.print();
    cout<<endl;
    l.paint();
    l.paint();
    l.paint();
    /*while(true){
        l.paint("*");
        l.paintback("*");
    }*/
}
