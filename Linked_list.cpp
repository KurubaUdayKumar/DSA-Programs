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

struct node* pushElement(struct node *head, int new_data)
{
	//write your code here
	node* new_node = new node;   //memory allocation 
	new_node->data = new_data;   //allocating data
	new_node-> next = head;     //allocating head
	head = new_node;           //pointing to the next node        
	return head;
}
int main()
{
    int n,key;
	struct node *head=NULL;
	cin>>n;
	for(int i=0;i<n;i++){
    	cin>>key;
    	head=pushElement(head,key);
	}
	display(head);
}

