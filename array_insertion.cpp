//Insert an element at a position in an array

#include <iostream>
using namespace std;
int main(){
    int arr[8]={10,14,12,5,7,9};
    int pos;
    cout<<"In which position you want to insert: ";
    cin>>pos;
    int elem;
    cout<<"Enter the element: ";
    cin>>elem;

    for(int i =8; i>=pos;i--){  //starting from last and decreamenting the counter till position
        arr[i+1]=arr[i];
        
    }
    arr[pos]=elem;        //after shifting insert the element 

    cout<<"The new array: "<<endl;
    for(int i=0; i<8; i++){
        cout<<arr[i]<<"\t";
    }

}

