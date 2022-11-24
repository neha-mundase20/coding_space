#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;
};

class queue{
    private:
    node*f,*r,*q;     // q for traversals

    public:
    queue(){
       f=r=NULL; 
    }
    void enqueue(int x);
    void display();
    void dequeue();
};

void queue::enqueue(int x){
    if(f==NULL && r==NULL){
        node*p=new node;
        p->data=x;
        p->next=NULL;
        f=p;
        r=p;
        q=p;
    }
    else{
        while(q->next!=NULL){
            q=q->next;
        }
        node*p=new node;
        
        p->data=x;
        p->next=NULL;
        q->next=p;
        r=p;
    }
}

void queue::display(){
    node*t;
    t=f;
    while(t->next!=NULL){
        cout<<t->data<<"\t";
        t=t->next;
    }
    cout<<t->data;
}

void queue::dequeue(){
    node*r=f;
    f=r->next;
    cout<<"\n"<<"The element that is deleted is:"<<"\n"<<r->data;
    delete(r);
}

int main(){
    int choice,op;
    queue q;
    do{
    cout<<"\n"<<"Choose from the dropdown below:"<<"\n";
    cout<<"\n"<<"1.Enqueue an element"<<"\n";
    cout<<"\n"<<"2.Display"<<"\n";
    cout<<"\n"<<"3.Dequeue"<<"\n";
    cin>>choice;
    switch(choice){
        case 1:
        int x;
        cout<<"\n"<<"Enter the element you want to insert:"<<"\n";
        cin>>x;
        q.enqueue(x);
        break;

        case 2:
        q.display();
        break;

        case 3:
        q.dequeue();
        break;
    }
    cout<<"\n"<<"Do you want to continue?(YES=1/NO=0)"<<"\n";
    cin>>op;
    }while(op==1);
    return 0;
}