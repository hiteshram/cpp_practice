//Demonstrating on how to access array of objects using pointers

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
    int j;
    for(j=0;j<5;j++){
        d[j].set_i(j);
    }
    for(j=0;j<5;j++){
        cout<<"Value is "<<d[j].get_i()<<endl;
    }

    demo *ptr=&d[0]; //declaring the pointer and defining with the address of the first object in the array
    cout<<"Value accessed using pointer "<<ptr->get_i()<<endl; //using
    //incrementing the pointer bumps ptr to point to next object in the object array
    *ptr++;
    cout<<"Value accessed using pointer "<<ptr->get_i()<<endl; //using -> to access the class function
    *ptr++;
    cout<<"Value accessed using pointer "<<ptr->get_i()<<endl;
    return 0;
}
