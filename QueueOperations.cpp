//1->Enqueue 2->Dequeue 3->Print

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q;
    cin>>q;
    queue<int> Q;
    int type,ele;
    for(int i=0;i<q;i++){
        cin>>type;
        if(type==1){
           cin>>ele;
            Q.push(ele);
        }
        else if(type==2){
            Q.pop();
        }
        else if(type==3){
            cout<<Q.front()<<endl;
        }
        else{
            cout<<"Invalid type";
        }
    }
    
    return 0;
}
