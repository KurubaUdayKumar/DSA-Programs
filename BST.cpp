#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
    
    void inorder(Node *root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

  Node * insert(Node * root, int value) {
  
  if(root==NULL) {
   
    Node* newNode = new Node(value);
    // newNode->left = NULL;
    // newNode->right = NULL;
    // newNode->data = value;
    return newNode;
  }
  
  if(value <= root->data)
    root->left = insert(root->left, value);
  else
    root->right = insert(root->right, value);
  
  return root;
}

};

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    cin >> t;

    while(t-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }
    
    myTree.inorder(root);
  
    return 0;
}