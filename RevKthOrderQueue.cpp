#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue> 
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,num;
    cin>>n;
    queue<int> q1;
    stack<int> s1;
    for(int i=0;i<n;i++){
        cin>>num;
        q1.push(num);
    }
    int rev;
    cin>>rev;
    for(int i=0;i<rev;i++){
        s1.push(q1.front());
        q1.pop();
    }
    while(!s1.empty()){
        q1.push(s1.top());
        s1.pop();
    }
    for(int i=0;i<n-rev;i++){
        q1.push(q1.front());
        q1.pop();
    }
    for(int i=0;i<n;i++){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    
    return 0;
}
