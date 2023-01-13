//Balanced Paranthesis using stack application
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


bool isbalanced(string s){
    int n=s.length();
    stack<char> st;
    for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(!st.empty()&&st.top()=='('){
                st.pop();
            }
            else{
                return false;
            }
        }
        else if(s[i]=='}'){
            if(!st.empty()&&st.top()=='{'){
                st.pop();
            }
            else{
                return false;
            }
        }
        else if(s[i]==']'){
            if(!st.empty()&&st.top()=='['){
                st.pop();
            }
            else{
                return false;
            }
        }
        
    }
    if(st.empty()){
        return true;
    }
    return false;
    
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    cin>>s;
    isbalanced(s);
    if(isbalanced(s)){
        cout<<"Balanced";
    }
    else
        cout<<"Not Balanced";
    
    return 0;
}