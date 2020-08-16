//Implementing array of object without constructor or destructor

#include<iostream>

using namespace std;

class demo{

    int i;
public:
    void set_i(int x);
    int get_i();
};

void demo::set_i(int x){
    i=x;
}

int demo::get_i(){
    return i;
}

int main(){

    demo d[5];
    int i;

    for(i=0;i<5;i++){
        d[i].set_i(i);
    }

    for(i=0;i<5;i++){
        cout<<d[i].get_i()<<endl;
    }

    return 0;
}
