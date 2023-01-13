#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct node{
    int data;
   node *next;
};

void display(struct node *head,int n){
    struct node *ptrNode;
    int arr[n],j,i=0,max=0,temp=0;
    for(ptrNode=head; ptrNode->next!=NULL;ptrNode=ptrNode->next){   //inserting LL values to array
       arr[i]=ptrNode->data;
        i++;
    }
    arr[i]=ptrNode->data;
    
    for(j=0;j<n;j++){
       if (arr[j] > max){
            max = arr[j];
            temp = j;    //index of maxVlaue
        }
    }
    
    for(j=n-1;j>=0;j--)   //reversing will print from nth value so we take n-1 to get the reversed 1st value
    {
        if(j==temp)
            continue;    //skipping the maxValue
        cout<<arr[j]<<" ";
        
    }

}

struct node* pushElement(struct node *head, int new_data)
{
    //write your code here
    node *new_node= new node;
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;
    return head;
    
}

int main()
{
    int n,key;
    struct node *head=NULL;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>key;
      head=pushElement(head,key);
    }
    display(head,n);
    
    
}