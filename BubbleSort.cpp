//Bubble sorting
#include<iostream>
using namespace std;

void bubble(int arr[], int n){       //function for bubble sort
    for(int i=0; i<n-1;i++){
        bool swapped = false;
        for(int j=0; j<n-1-i;j++){  //ignoring the last element
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }

}
void display(int arr[], int n){      //display the array
    cout<<"Sorted Array: "<<endl;     
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
    int arr[5]={4,9,6,2,7};
    bubble(arr,5);
    display(arr,5);
}