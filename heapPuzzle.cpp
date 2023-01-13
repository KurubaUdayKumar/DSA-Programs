#include<iostream>
using namespace std;
int main(){
    int *x;
    int size =3;
    x = new int[size];

    for(int i=0; i<size; i++){
        x[i] = i+3;
        cout<<x[i]<<" ";
    }
    delete[] x;



}