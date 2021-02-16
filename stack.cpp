#include <iostream>
using namespace std;
//La politica dello stack è FIFO (first in - first out)
class Stack{
public:
    int d=100, dati[100], p=0;
    Stack(){
    }
    void push(int e){
        dati[p]=e;
        p=p+1;
    }
    int pop(){
        p=p-1;
        return dati[p];
    }

};

int main()
{
    Stack p;
    p.push(33);
    p.push(50);
    p.push(13);
    cout<<p.pop()<<endl;
    cout<<p.pop()<<endl;
    return 0;
}
