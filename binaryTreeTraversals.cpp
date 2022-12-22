//Creation of a simple binary tree and tree traversals

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
    void inorder_non_recursive(node*root);
    void preorder_non_recursive(node*root);
    void postorder_non_recursive(node*root);
};

class stack{
    private:
    node*val;
    stack*next;
    stack*top;

    public:

    stack(){
        top=NULL;
    }

    void push(node*x){
        if (isEmpty()){
            stack*p=new stack;
            p->val=x;
            p->next=NULL;
            top=p;
            //cout<<"\n"<<x<<" inserted successfully"<<"\n";
        }
        else{
           stack*p=new stack; 
           p->val=x;
           p->next=top;
           top=p;
           //cout<<"\n"<<x<<" inserted successfully"<<"\n";
        }
    }

    node*pop(){
        node*x;
        stack*q=new stack;
        q=top;
        x=q->val;
        top=top->next;
        //cout<<"\n"<<x<<" is popped out"<<"\n";
        delete q;
        return x;
    }

    int isEmpty(){
        if(top==NULL){
            return 1;
        }
        else{
            return 0;
        }
    }

    node* topp(){
        return top->val;
    }

};

node* node::createTree(node*root){
    int d;
    cout<<"\n"<<"Enter the data:"<<"\n";
    cin>>d;
    root = new node(d);
    if(d==-1){
        return NULL;
    }
    cout<<"\n"<<"Enter the data to insert in left of "<<d<<"\n";
    root->left=createTree(root->left);
    cout<<"\n"<<"Enter the data to insert in right of "<<d<<"\n";
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

void node::inorder_non_recursive(node*root){
    stack s;
    node*current;
    current=root;
    cout<<"\n"<<"Inorder traversal is:"<<"\n";
    while(current!=NULL || !s.isEmpty()){

      while(current!=NULL){
        s.push(current);
        current=current->left;
      }
        current=s.topp();
        node*temp=s.pop();
        cout<<"\t"<<temp->data;

        current=current->right;
    }
}

void node::preorder_non_recursive(node*root){
    stack s;
    node*current;
    current=root;
    s.push(current);
    cout<<"\n"<<"Preorder traversal is:"<<"\n";
    while(!s.isEmpty()){
        current=s.topp();

        node*temp=s.pop();
        cout<<temp->data<<"\t";

        if(current->right!=NULL){
            s.push(current->right);
        }

        if(current->left!=NULL){
            s.push(current->left);
        }
    }
}

void node::postorder_non_recursive(node*root){
    stack s1,s2;
    node*current=root;
    s1.push(current);
    while(!s1.isEmpty()){
        current=s1.topp();
        s2.push(current);

        if(current->left!=NULL){
            s1.push(current->left);
        }

        if(current->right!=NULL){
            s1.push(current->right);
        }
    }
    while(!s2.isEmpty()){
        node*temp=s2.pop();
        cout<<temp->data<<"\t";
    }
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
            n->preorder_non_recursive(root);
            break;
        }

        case 2:{
            n->inorder(root);
            n->inorder_non_recursive(root);
            break;
        }

        case 3:{
            n->postorder(root);
            n->postorder_non_recursive(root);
            break;
        }
    }
}