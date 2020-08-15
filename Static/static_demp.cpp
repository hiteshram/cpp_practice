/*
If we declare a variable as static in a class, it's like a shared variable, only one copy
among all the objects of the class

Here we have declared the variable 'a' as static but we have define it outside the class as
we know that a class is like blueprint and all the rest of the variable's memory is created
from object, since static variables are shared we have to define it globally as shown below
static variables are always initialized with 0.
*/
#include<iostream>

using namespace std;

class myclass{
    static int a;
    int b;
public:
    myclass(int x,int y){
    a=x;
    b=y;
    }

    void show(){
        cout<<"Value of static variable 'a' is "<<a<<endl;
        cout<<"Value of non-static variable 'b' is "<<b<<endl;
    }
};

int myclass::a;

int main(){
    myclass ob1=myclass(1,1);
    ob1.show(); //outputs 1,1
    myclass ob2=myclass(2,2);
    ob2.show(); //outputs 2,2
    ob1.show(); //outputs 1,2 as we have updated the static variable a in ob2
    return 0;
}
