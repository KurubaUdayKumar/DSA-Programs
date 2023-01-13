#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void display(struct node *head)
{
	struct node *ptrNode;
	for(ptrNode=head; ptrNode->next!=NULL;ptrNode=ptrNode->next)  //1 element before to print the second last element
	{
		cout<<ptrNode->data<<"->";
	}
	cout<<ptrNode->data<<endl;     //print the last element
}

struct node *addElement(struct node *head, int new_data){
    node *new_node=new node;
    // //if(new_node==NULL){    //condition for overflow
    //     cout<<"Overflow";
    // }
    new_node->data=new_data;
    new_node->next=NULL;
    if(head==NULL){
        head = new_node;
    }
    else {
        struct node *ptr;
        for(ptr=head;ptr->next!=NULL;ptr=ptr->next)
        {
        }
        ptr->next=new_node;
    }
    return head;

}
int main()
{
    int n,key;   //n=number of element k=element
	struct node *head=NULL;
	cin>>n;
	for(int i=0;i<n;i++){
    	cin>>key;
    	head=addElement(head,key);
	}
	display(head);
}

