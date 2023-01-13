#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
    
    node(int val){
        data = val;
        left=right=NULL;
    }
};

class solution{
    public:
    node *insert(node *root, int value){
        if(root==NULL){
            node *new_node = new node(value);
            return new_node;
        }
        if(value < root->data){
            root->left = insert(root->left,value);
        }
        else{
            root->right = insert(root->right, value);
        }
        return root;
    }
    
    void print_leaf(node *root){
        if(root==NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            cout<<root->data<<" ";
            return;
        }
        
        if(root->right){
            print_leaf(root->right);
        }
        if(root->left){
            print_leaf(root->left);
        }
        
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,data;
    solution t1;
    node *root = NULL;
    cin>>n;
    if(n>0){
        for(int i=0;i<n;i++){
            cin>>data;
            root=t1.insert(root,data);
        }
        t1.print_leaf(root);
        
    }
    return 0;
}
