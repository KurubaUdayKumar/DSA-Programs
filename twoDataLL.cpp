#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Friend
{
    string name;
    int strength;
    Friend *next;
};

Friend *head = NULL;

void add_friend()
{
   
  
    Friend *frnd = new Friend;
    cin>>frnd->name;
    cin>>frnd->strength;
    frnd->next = NULL;
    //Inserting friend in the beginning of the list
    if(head==NULL){
        head = frnd;
    }
    else{
        Friend *ptr;
        for(ptr=head;ptr->next!=NULL;ptr=ptr->next)
        {

        }
        ptr->next=frnd;

    }
    
}

void display()
{
    struct Friend *ptr;
    ptr=head;
    
    while(ptr!=NULL){
            cout<<ptr->name<<" "<<ptr->strength<<endl;
        ptr=ptr->next;
    }
    

}

int main() { 
    int n;
    cin>>n;     
  
    for(int i=0; i<n; i++)        //adding friend in the list
      add_friend();

    display();  
    
    return 0;
}