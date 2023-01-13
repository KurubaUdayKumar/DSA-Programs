#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};
node *root = NULL;
void insert(int value)
{
    // allocate the memory
    node *new_node = new node;
    node *parent = NULL;
    // assign  value to data
    new_node->data = value;
    // assign  Left child location to NULL
    new_node->left = NULL;
    // assign  Right child location to NULL
    new_node->right = NULL;
    // if tree is empty then new_node is the root node
    if (root == NULL)
    {
        root = new_node;
    }
    else
    {
        // get the parent node
        node *ptr = root;
        while (ptr != NULL)
        {
            parent = ptr;
            if (value > ptr->data)
                ptr = ptr->right;
            else
                ptr = ptr->left;
        }
        // according to value of new_node, assign the new_node in the tree
        if (value < parent->data)
        {
            parent->left = new_node;
        }
        else
        {
            parent->right = new_node;
        }
    }
}
// in order traversing
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << "  " << root->data << "     ";
    inorder(root->right);
}
// pre order traversing
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << "  " << root->data << "     ";
    preorder(root->left);
    preorder(root->right);
}
// post order traversing
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << "  " << root->data << "     ";
}
int main()
{
    insert(20);
    insert(10);
    insert(5);
    insert(15);
    insert(40);
    insert(45);
    insert(30);

    cout << "\ninorder (Binary Search tree)" << endl;
    inorder(root);
    cout << "\npreorder (Binary Search tree)" << endl;
    preorder(root);
    cout << "\npostorder (Binary Search tree)" << endl;
    postorder(root);
}
