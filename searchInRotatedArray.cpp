#include <bits/stdc++.h> 
//#include <vector>
using namespace std;

int getpivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
int binarySearch(int arr[], int s, int e, int k){
    int mid = s + (e-s)/2;
    
    while(s<=e){
        if(k == arr[mid]){
            return mid;
        }
        else if(k>arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}


int findPosition(int arr[], int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot=getpivot(arr,n);
    
    if(k >=arr[pivot] && k<=arr[n-1]){
        return binarySearch(arr, pivot, n-1, k);
    }
    return binarySearch(arr, 0, pivot-1, k);
}

int main(){
    int arr[7]={2, 4, 5, 6, 8, 9, 1};
    cout<<"Position : "<<findPosition(arr,7,8);

}

