#include <iostream>
using namespace std;
void merge(int array[],int left, int mid, int right){
    int n1=mid-left+1;
    int n2=right-mid;

    //create temp arrays
    int *leftArray = new int[n1];
    int *rightArray = new int[n2];

    //copy data to temp arrays
    for(int i=0;i<n1;i++){
        leftArray[i]=array[left+i];
    }
    for(int i=0;i<n2;i++){
        rightArray[i]=array[mid+1+i];
    }
    //initial index of the leftArray, rightArray and merged
    int i=0;
    int j=0;
    int k=left;

    //Merge the temp arrays to one array
    
}