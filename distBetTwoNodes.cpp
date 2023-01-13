#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    struct Node* left, *right;
    int key;
};
 
struct Node* newNode(int key)
{
    struct Node* ptr = new Node;
    ptr->key = key;
    ptr->left = ptr->right = NULL;
    return ptr;
}
 
// Standard BST insert function
struct Node* insert(struct Node* root, int key)
{
    if (!root)
        root = newNode(key);
    else if (root->key > key)
        root->left = insert(root->left, key);
    else if (root->key < key)
        root->right = insert(root->right, key);
    return root;
}
 
// This function returns distance of x from
// root. This function assumes that x exists
// in BST and BST is not NULL.
int distanceFromRoot(struct Node* root, int x)
{
    if (root->key == x)
        return 0;
    else if (root->key > x)
        return 1 + distanceFromRoot(root->left, x);
    return 1 + distanceFromRoot(root->right, x);
}
 
// Returns minimum distance between a and b.
// This function assumes that a and b exist
// in BST.
int distanceBetween2(struct Node* root, int a, int b)
{
    if (!root)
        return 0;
 
    // Both keys lie in left
    if (root->key > a && root->key > b)
        return distanceBetween2(root->left, a, b);
 
    // Both keys lie in right
    else if (root->key < a && root->key < b) // same path
        return distanceBetween2(root->right, a, b);
 
    // Lie in opposite directions (Root is
    // LCA of two nodes)
    else
        return distanceFromRoot(root, a) + distanceFromRoot(root, b);
}
 
// This function make sure that a is smaller
// than b before making a call to findDistWrapper()
int findDistWrapper(Node *root, int a, int b)
{
   if (a > b)
     swap(a, b);
   return distanceBetween2(root, a, b);  
}
 

int main()
{
    struct Node* root = NULL;
    int n, data, x,y;
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>data;
        root = insert(root,data);
        }
    cin>>x;
    cin>>y;
    cout<<findDistWrapper(root,x,y);
       
    return 0;
}