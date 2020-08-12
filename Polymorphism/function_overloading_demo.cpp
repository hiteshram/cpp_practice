#include<cstring>
#include<iostream>
#include<cstdio>

using namespace std;

int add(int a, int b){
    return a+b;
}

double add(double a, double b){
    return a+b;
}

float add(float a, float b){
    return a+b;
}

void add(char* a, char* b){
    strcat(a,b);
}


int main(){

    cout<<add(1,2)<<endl;
    cout<<add(1.234,2.345)<<endl;
    char temp[100];
    strcpy(temp,"Hello ");
    add(temp,"World");
    cout<<temp;

    return 0;
}
