#include<iostream>
using namespace std;

class node{
    private:
    int data;
    node*next;
    node*f;
    node*r;

    public:
    node(){
        f=r=NULL;
    }

    int isEmpty();
    node* enqueue(int x,node*head);
    void display(node*head);
    void dequeue(node*head);
};

int node::isEmpty(){
    if(f==NULL && r==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

//no queue full condition as we are implementing it using linked lists

node* node::enqueue(int x,node*head){
    if(isEmpty()){
        node*p=new node;
        p->data=x;
        p->next=p;
        f=p;
        r=p;
        head=p;
        return head;
    }
    else{
        node*p=new node;
        r->next=p;
        r=p;
        p->data=x;
        p->next=head;
        return head;
    }
}

void node::display(node*head){
    node*q;
    q=f;
    while(q->next!=head){
        cout<<q->data<<"\t";
        q=q->next;
    }
    cout<<q->data<<"\t";
}

void node::dequeue(node*head){
    int temp;
    node*q=f;
    temp=q->data;
    f=f->next;
    head=head->next;
    cout<<"\n"<<"The element that is deleted is:"<<"\n";
    cout<<temp;
    delete q;
}

int main(){
    int choice;
    node*head=NULL;
    node n;

    do{
    cout<<"\n"<<"Choose from the dropdown below:"<<"\n";
    cout<<"\n"<<"1.Enqueue an element in queue"<<"\n";
    cout<<"\n"<<"2.Display elements of the queue"<<"\n";
    cout<<"\n"<<"3.Dequeue an element from the queue"<<"\n";
    cout<<"\n"<<"4.Exit"<<"\n";

    cin>>choice;

    switch(choice){
        case 1:
        {
            int x;
            cout<<"\n"<<"Enter the element you want to insert:"<<"\n";
            cin>>x;
            head=n.enqueue(x,head);
            break;
        }

        case 2:
        {
            n.display(head);
            break;
        }

        case 3:
        {
            n.dequeue(head);
            break;
        }

        case 4:
        {
            break;
        }
    }
    }while(choice!=4);
    return 0;
}