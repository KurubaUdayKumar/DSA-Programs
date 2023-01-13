#include<iostream>
using namespace std;
int main(){
    int *numPtr = new int;
    cout<<"*numPtr: "<<*numPtr<<endl;
    cout<<"numPtr: "<<numPtr<<endl;
    cout<<"&numPtr: "<<&numPtr<<endl;

    *numPtr = 42;
    cout<<"After assigning  the value"<<endl;

    cout<<"*numPtr: "<<*numPtr<<endl;
    cout<<"numPtr: "<<numPtr<<endl;
    cout<<"&numPtr: "<<&numPtr<<endl;

}