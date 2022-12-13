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

int main(){
    node*root = NULL;
    node*n = new node(0);
    root=n->createTree(root);
}