#include<iostream>

using namespace std;

class building{
    int floors;
    int rooms;
    int area;

public:
    void set_rooms(int r);
    int get_rooms();

    void set_floors(int f);
    int get_floors();

    void set_area(int a);
    int get_area();
};


class residence: public building{
    int bedrooms;
    int bathrooms;
public:
    void set_bedrooms(int b);
    int get_bedrooms();

    void set_bathrooms(int b);
    int get_bathrooms();
};

void building::set_rooms(int r){
    rooms=r;
}

int building::get_rooms(){
    return rooms;
}

void building::set_floors(int f){
    floors=f;
}

int building::get_floors(){
    return floors;
}

void building::set_area(int a){
    area=a;
}

int building::get_area(){
    return area;
}

void residence::set_bedrooms(int b){
    bedrooms=b;
}

int residence::get_bedrooms(){
    return bedrooms;
}

void residence::set_bathrooms(int b){
    bathrooms=b;
}

int residence::get_bathrooms(){
    return bathrooms;
}


int main(){

    residence r;
    r.set_area(30000);
    r.set_rooms(100);
    r.set_floors(10);
    r.set_bedrooms(3);
    r.set_bathrooms(2);
    cout<<r.get_area()<<endl;
    cout<<r.get_rooms()<<endl;
    cout<<r.get_floors()<<endl;
    cout<<r.get_bedrooms()<<endl;
    cout<<r.get_bathrooms()<<endl;
    return 0;
}
