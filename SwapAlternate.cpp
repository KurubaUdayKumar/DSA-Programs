#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n){
    for(int i=0;i<n;i=i+2){
        if(i+1<n){    //checking we are not exceeding the size of array
            swap(arr[i],arr[i+1]);
        }
    }

}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[8]={5,2,9,7,4,6,8,10};
    int arr2[7]={11,33,9,78,15,45,12};
    swapAlternate(arr,8);
    printArray(arr,8);

    cout<<endl;

    swapAlternate(arr2,7);
    printArray(arr2,7);


}