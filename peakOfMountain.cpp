#include <iostream>
using namespace std;

int peakOfMountain(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;

    }
    return e;   //return the start or end same thing
}

int main(){
    int arr[4]={1,10,5,2};


    /*   10
              5
                 2    peak is 10
    1
    
    */
    
    cout<<"Peak of Mountain: "<<peakOfMountain(arr,4)<<endl;
    cout<<"That is: "<<arr[peakOfMountain(arr,4)];

}