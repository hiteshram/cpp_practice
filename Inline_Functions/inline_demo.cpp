/*
Inline functions are similar to normal functions except during compilation the function
call will be replaced with the code of the inline function whereas during normal function
call we will push the current state to stack and execute the function and stuff

All the functions defined within class are defaulted with inline, we can specify it with
inline or not.
*/
#include<iostream>

using namespace std;


class myclass{
    int a,b;
public:
    void init(int i,int j);
    void show();
};

inline void myclass::init(int i,int j){
    a=i;
    b=j;
}

inline void myclass::show(){
    cout<<"The values are "<<a<<" and "<<b<<endl;
}

int main(){
    myclass x;
    x.init(10,20);   //During compilation this call is replaced with a=i;b=j;
    x.show();   //This line is replaced with the cout line of show()
    return 0;
}
