//insertion in linked list in a given location
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node
{
    int data;
    node *next;
};
struct node *push(struct node *head, int new_data)
{ // inserting from rear side
    node *new_node = new node;
    new_node->data = new_data;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        struct node *ptr;
        for (ptr = head; ptr->next != NULL; ptr = ptr->next)
        {
        }
        ptr->next = new_node;
    }

    return head;
}
void insert(struct node *head, int pos, int marks)
{
    struct node *ptr1 = head;
    int count = 0;
    while (ptr1 != NULL)
    {
        count++;
        if (count == pos - 1)
        {
            node *new_node1 = new node;
            new_node1->data = marks;
            new_node1->next = ptr1->next;
            ptr1->next = new_node1;
            break;
        }
        ptr1 = ptr1->next;
    }
}
void display(struct node *head)
{
    struct node *ptr2 = head;
    while (ptr2 != NULL)
    {
        cout << ptr2->data << " ";
        ptr2 = ptr2->next;
    }
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int key;
    struct node *head = NULL;
    cout << "Enter the elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> key;
        head = push(head, key);
    }
    int pos, marks;
    cout << "Enter position: ";
    cin >> pos;
    cout << "Enter new data: ";
    cin >> marks;
    insert(head, pos, marks);
    display(head);

    return 0;
}
