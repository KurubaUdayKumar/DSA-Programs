//climStairs using recursion
#include<iostream>

int waysClimb(int n){
    if(n==0)
    return 1;
    if(n<0)
    return 0;

    int ans=waysClimb(n-1)+waysClimb(n-2);  //either 2 stairs or 1 stairs (all cases)

    return ans;

}



using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=waysClimb(n);
    cout<<ans;
    return 0;

}