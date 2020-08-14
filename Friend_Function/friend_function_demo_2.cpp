//A member function from another class can also be friended in another class as below

#include<iostream>

using namespace std;

class C2; //forward declaration

class C1{
    int status;

public:
    C1(int s){
        status=s;
    }

    int idle(C2 c);
};

class C2{
    int status;
public:
    C2(int s){
        status=s;
    }

    friend int C1::idle(C2 c);
};


int C1::idle(C2 c){
    if(status==1 || c.status==1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    C1 a=C1(1);
    C2 b=C2(0);
    if(a.idle(b)){
        cout<<"Screen is available"<<endl;
    }
    else{
        cout<<"Screen is not available"<<endl;
    }
    return 0;
}

