#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    struct node{
        int data;
        struct node *next;
    };
    struct node *pushElements(struct node *head, int new_data){
        node *new_node = new node;
        new_node->data=new_data;
        new_node->next=head;
        head = new_node;
        return head;
        
    }
    struct node *minimum(struct node *head){
        struct node *ptr=head;
        int min=ptr->data;
        while(ptr!=NULL){
            if(ptr->data<min){
                min=ptr->data;
            }
            ptr=ptr->next;
            
            
        }
        cout<<"Minimum: "<<min;
        
        return 0;
        
        
        
        
    }
    int main(){
        int key;
        struct node *head = NULL;
        for(int i=0;i<5;i++){
            cin>>key;
            head = pushElements(head, key);
        }
        minimum(head);
        return 0;
    }
    

