#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node *pushElement(struct node *head, int new_data){
    node *new_node = new node;
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;
    return head;
}
struct node *insertBeg(struct node *head){
    int num;
    cout<<"Enter the number to insert:";
    cin>>num;
    node *new_node1=new node;
    new_node1->data=num;
    new_node1->next=head;
    head=new_node1;
    return head; 
}
void display(struct node *head){
    struct node *ptr=head;
    for(ptr=head;ptr->next!=NULL;ptr=ptr->next){
        cout<<ptr->data<<"->";
    }
    cout<<ptr->data<<endl;
}
int main(){
    int key;
    struct node *head=NULL;
    for(int i=0;i<5;i++){
        cin>>key;
        head=pushElement(head,key);
    }
    cout<<"Original Linked list: "<<endl;
    display(head);
    head=insertBeg(head);



    cout<<endl<<"After insertion: "<<endl;
    display(head);
}