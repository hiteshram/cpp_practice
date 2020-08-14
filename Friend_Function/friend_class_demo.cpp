//A class can be a friend to another class as well,
#include<iostream>

using namespace std;


class myclass{

    int a,b;

public:
    myclass(int x,int y){
        a=x;
        b=y;
    }

    friend class min_number;

};

class min_number{

public:
    int find_min(myclass x);
};

int min_number::find_min(myclass x){
    if(x.a<x.b)
        return x.a;
    else
        return x.b;
}


int main(){

    myclass m=myclass(10,20);
    min_number mn;

    cout<<mn.find_min(m);

    return 0;
}
