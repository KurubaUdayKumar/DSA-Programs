//Binary search

#include<iostream>
using namespace std;
int binary_search(int arr[9],int left, int right, int key){
    if(right>=left){                           //function for binary search
        int mid=(right+left)/2;

        if(arr[mid]==key){
            return mid;
        }
        if(key<arr[mid]){
            return binary_search(arr,left,mid-1,key);    //recurssion
        }
        
         return binary_search(arr,mid+1,right,key);      //recurssion

    }
    return -1;
}

int main(){
    int arr[9]={10,20,30,40,50,60,70,80,90};
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    int pos=binary_search(arr, 0,9-1,key);
    if(pos==-1){
        cout<<"Key not found!!";
    }
    else{
        cout<<"Found the key in: "<<pos<<" index";
    }
}