#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string s){
    string s1=s;
    reverse(s1.begin(),s1.end());  //to reverse a string
    if(s==s1){
        return "Yes";
    }
    else{
        return "No";
    }
    
   
    
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    string s;
    stack<string> st;
    if(n>=1){
        for(int i=0;i<n;i++){
        cin>>s;
        st.push(s);
    }
        for(int i=0;i<n;i++){
            cout<<isPalindrome(st.top())<<endl;
            st.pop();
            
    }
    }
    else{
        cout<<"Invalid Input";
    }
    
    
    
    return 0;
}
