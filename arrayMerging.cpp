#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int prg[n];
    for(int i=0;i<n;i++){
        cin>>prg[i];
    }
    int m;
    cin>>m;
    int aut[m];
    for(int i=0;i<m;i++){
        cin>>aut[i];
    }
   
    int i=0,j=0,k=0;
    int mrg[m+n];
    
    while(i<n){
        mrg[k++]=prg[i++];
    }
    while(j<m){
        mrg[k++]=aut[j++];
    }
    for(int l=0;l<(m+n);l++){
        cout<<mrg[l]<<" ";
    }

    
    return 0;
}
