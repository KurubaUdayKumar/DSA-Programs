#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length:";
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<s[i];
    }
    return 0;

}