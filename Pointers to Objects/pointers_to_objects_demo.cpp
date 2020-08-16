//demonstrates the concept of pointer to objects and the use of -> operator

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
    demo d;
    d.set_i(100);
    cout<<"Variable has the value "<<d.get_i()<<endl;
    demo *ptr; //Declaring and defining a pointer of type of class demo
    ptr=&d; //assigning the address of the variable to the pointer
    cout<<"Variable has the value "<<ptr->get_i()<<endl; //Accessing the class function using arrow operator
    return 0;
}
