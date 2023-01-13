#include<iostream>
using namespace std;


void display(int arr[],int n){  //display
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int partition(int arr[], int start, int end){ //for partition

    int pivotIndex=start;
    int i = start+1, j = end;

    do{
        while(arr[i]<=arr[pivotIndex]){
            i++;
        }
        while(arr[j]>arr[pivotIndex]){
            j--;
        }
        if(i<j){
            //swap arr[i] and arr[j]
            // int temp=arr[i];
            // arr[i]=arr[j];
            // arr[j]=temp;
            swap(arr[i],arr[j]);
        }
    }while(j>i);
    //swap arr[pivotIndex] and arr[j]
    // int temp=arr[pivotIndex];
    // arr[pivotIndex]=arr[j];
    // arr[j]=temp;
    swap(arr[pivotIndex],arr[j]);
    pivotIndex=j;
    return pivotIndex;
}

void quickSort(int arr[],int left, int right){ //sorting
     if(left>=right){
        return;
     }
     //partition the array
     int p=partition(arr,left,right);
     //sorting the left part
     quickSort(arr,left,p-1);
     //sorting the right part
     quickSort(arr,p+1,right);


}

int main(){
    int arr[]={40,20,10,80,60,50,7,30,100};
    int n=9;
    cout<<"Original Array: ";
    display(arr,n);

    quickSort(arr,0,n-1);
    cout<<endl<<"Sorted Array: ";
    display(arr,n);
    return 0;

}
