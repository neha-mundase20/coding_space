#include<iostream>
using namespace std;


struct node{
    int data;
    node*left,*right;

    node(int val){
        data=val;
        left=right=NULL;
    }
};

node*insertBST(node*root,int val){
    if(root==NULL){
        root=new node(val);
        return root;
    }
    if(val < root->data){
        root->left=insertBST(root->left,val);
    }

    else{
        root->right=insertBST(root->right,val);
    }
    return root;
}

void searchBST_rec(node*root,int key){
    if(root==NULL){
        cout<<"\n"<<"Key not found"<<"\n";
        return;
    }
    
    if(root->data==key){
        cout<<"Key found"<<"\n";
        return;
    }
    else if(root->data<key){
        searchBST_rec(root->right,key);
    }
    else{
        searchBST_rec(root->left,key);
    }
}

void searchBST_nonrec(node*root,int key){
    node*temp=root;
    while(temp!=NULL){
        if(temp->data==key){
            cout<<"\n"<<"Key found"<<"\n";
            break;
        }
        else if(temp->data < key){
            temp=temp->right;
        }
        else{
            temp=temp->left;
        }
    }
        cout<<"\n"<<"Key not found"<<"\n";
}

void inorder_recursive(node*root){
    if(root==NULL){
        return;
    }
    inorder_recursive(root->left);
    cout<<root->data<<"\t";
    inorder_recursive(root->right);
    
}

node* min_Val(node*root){
    node*temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    cout<<"\n"<<temp->data<<" is the min value"<<"\n";
    return temp;
}

node* max_Val(node*root){
    node*temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    cout<<"\n"<<temp->data<<" is the max value"<<"\n";
    return temp;
}

node* delete_in_BST(node*root,int key){
    if(root==NULL){
        return root;
    }

    if(root->data==key){
        //perform deletion operation

        //if node to be deleted has no child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        //if node to be deleted has single child either left or right
        else if(root->left==NULL && root->right!=NULL){
            node*temp=root->right;
            delete root;
            return temp;
        }

        else if(root->right==NULL && root->left!=NULL){
            node*temp=root->left;
            delete root;
            return temp;
        }

        //if node to be deleted has both left as well as right child
        else{
            node*temp1=min_Val(root->right);
            int mini = temp1->data;
            root->data=mini;
            root->right=delete_in_BST(root->right,mini);
            return root;
        }
    }

    else if(root->data < key){
        root->right=delete_in_BST(root->right,key);
    }

    else{
        root->left=delete_in_BST(root->left,key);
    }
}

int main(){
    int val,key,choice;
    node*root=NULL;
    cout<<"\n"<<"Enter the data:"<<"\n";
    cin>>val;
    while(val!=-1){
        root=insertBST(root,val);
        cout<<"\n"<<"Enter the data:"<<"\n";
        cin>>val; 
        
    }
    cout<<"\n"<<"BST created successfully"<<"\n";
    do{
    cout<<"\n"<<"Choose the operations that you want to perform:"<<"\n";
    cout<<"\n"<<"1.Inorder BST traversal"<<"\n";
    cout<<"\n"<<"2.Search for a value in BST"<<"\n";
    cout<<"\n"<<"3.Delete any value in BST"<<"\n";
    cout<<"\n"<<"4.Exit"<<"\n";
    cin>>choice;
    
    switch(choice){
        case 1:{
            inorder_recursive(root);
            break;
        }

        case 2:{
            cout<<"\n"<<"Enter the key that needs to be searched:"<<"\n";
            cin>>key;
            searchBST_rec(root,key);
            searchBST_nonrec(root,key);
            break;
        }

        case 3:{
           cout<<"\n"<<"Enter the key that needs to be deleted:"<<"\n";
           cin>>key; 
           root=delete_in_BST(root,key);
           break;
        }
        case 4:{
            break;
        }
    }
    }while(choice!=4);
    return 0;
}