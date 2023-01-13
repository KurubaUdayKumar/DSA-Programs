#include<iostream>
using namespace std;
#include<queue>

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node *buildTree(node *root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for right of "<<data<<endl;
    root->right=buildTree(root->right);

    return root;
}

void levelOrder(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node *temp=q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
            }
        }
       
    }

}

void inorder(node *root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void preorder(node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}



int main(){
    node *root=NULL;
    root = buildTree(root);
    
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    

    //level Order traversal
    cout<<"Levelorder tarversal: "<<endl;
    levelOrder(root);
    cout<<endl;

    //inorder traversal  (LNR)
    cout<<"Inorder Traversal: "<<endl;
    inorder(root);
    cout<<endl;

    //preorder traversal (NLR)
    cout<<"Preorder Traversal: "<<endl;
    preorder(root);
    cout<<endl;

    //postorder traversal (LRN)
    cout<<"Postorder Traversal: "<<endl;
    postorder(root);
}

