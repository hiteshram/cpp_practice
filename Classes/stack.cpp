#include<iostream>
#define MAX_SIZE 100

using namespace std;

class stack{
    int tos;
    int data[MAX_SIZE];
    public:
        void init();
        void push(int item);
        int pop();
};

void stack::init(){
    tos=0;
}

void stack::push(int item){
    if(tos==MAX_SIZE){
        cout<<"\nFull stack";
        return;
    }else{
        data[tos]=item;
        tos++;
    }
}

int stack::pop(){
    int item;
    if(tos==0){
        cout<<"\nEmpty Stack";
        return -1;
    }else{
        tos--;
        return data[tos];
    }
}

int main(){
    stack stk;

    stk.init();
    stk.push(1);
    stk.push(2);
    cout<<stk.pop();
    cout<<stk.pop();
    return 0;
}

