#include <iostream>
using namespace std;
int main()
{
    try{
        throw 10;
    }
    
    catch(int a){
        cout<<"Int";
    }
    catch(...){
        cout<<"all";
    }
    return 0;
    
}