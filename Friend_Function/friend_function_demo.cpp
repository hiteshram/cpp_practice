#include<iostream>

using namespace std;

class myclass{
    int a,b;

    public:
    myclass(int x,int y){
        a=x;
        b=y;
    }

    friend int sum_ab(myclass m);
};

int sum_ab(myclass m){
    return m.a+m.b;
}

int main(){

    myclass m=myclass(100,20.5);
    cout<<sum_ab(m);
    return 0;
}
