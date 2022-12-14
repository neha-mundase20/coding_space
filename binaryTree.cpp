//Creation of a simple binary tree

#include <iostream>
using namespace std;

class node{
    private:
    int data;
    node*left;
    node*right;

    public:
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

    node* createTree(node*root);
    void preorder(node*root);
    void inorder(node*root);
    void postorder(node*root);
};

node* node::createTree(node*root){
    int d;
    cout<<"\n"<<"Enter the data:"<<"\n";
    cin>>d;
    root = new node(d);
    if(d==-1){
        return NULL;
    }
    cout<<"\n"<<"Enter the data to insert in left of"<<d<<"\n";
    root->left=createTree(root->left);
    cout<<"\n"<<"Enter the data to insert in right of"<<d<<"\n";
    root->right=createTree(root->right);

    return root;
}

void node::preorder(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"\t";
    preorder(root->left);
    preorder(root->right);
}

void node::inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
}

void node::postorder(node*root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"\t";
}

int main(){
    int choice;
    node*root = NULL;
    node*n = new node(0);
    root=n->createTree(root);
    cout<<"\n"<<"Choose from the dropdown below:"<<"\n";
    cout<<"\n"<<"1.Preorder Traversal";
    cout<<"\n"<<"2.Inorder Traversal";
    cout<<"\n"<<"3.Postorder Traversal";
    cin>>choice;
    switch (choice){
        case 1:{
            n->preorder(root);
            break;
        }

        case 2:{
            n->inorder(root);
            break;
        }

        case 3:{
            n->postorder(root);
            break;
        }
    }
}