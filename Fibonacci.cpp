#include<iostream>
using namespace std;
int fib(int n){
	//base case
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	
	//recursion relation
	return fib(n-1)+fib(n-2);
}

int main(){
	int n;
	cin>>n;
	int ans=fib(n);
	
	cout<<ans;
	return 0;
		
}
