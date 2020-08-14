#include<iostream>
#define MAX_SIZE 100

using namespace std;

class stack{
    int tos;
    int data[MAX_SIZE];
    public:
        stack();
        ~stack();
        void push(int item);
        int pop();
};

stack::stack(){
    tos=0;
    cout<<"Stack is initialized"<<endl;
}

stack::~stack(){
    cout<<"Stack Destroyed"<<endl;
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
    stack stk1,stk2;
    stk1.push(1);
    stk1.push(2);
    stk2.push(3);
    stk2.push(4);
    cout<<stk1.pop()<<endl;
    cout<<stk1.pop()<<endl;
    cout<<stk2.pop()<<endl;
    cout<<stk2.pop()<<endl;

    return 0;
}

