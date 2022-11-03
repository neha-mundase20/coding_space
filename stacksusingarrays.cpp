#define MAX 30
#include<iostream>
using namespace std;

class stack{
    private:

    int arr[MAX];
    int top;
    int flag;

    public:
    stack(){
        top=-1;
    }

    int isEmpty();
    int isFull();
    void push(int x);
    void pop();
    void display();
};

int stack::isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int stack::isFull(){
    if(top==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}

void stack::push(int x){
    if (!isFull()){
        arr[++top]=x;
    }
    else {
        cout<<"\n"<<"The array is full"<<"\n";
    }
}

void stack::pop(){
    if(!isEmpty()){
    int temp;
    temp=arr[top--];
    cout<<"\n"<<"The element that is popped out is:"<<"\n";
    cout<<"\n"<<temp<<"\n";
    }

    else{
        cout<<"\n"<<"The stack is empty"<<"\n";
    }
}

void stack::display(){
    cout<<"\n"<<"The elements stored in stack are:"<<"\n";
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<"\t";
    }
}


int main(){
    int choice,op,x;

    stack*p=new stack();

    do{
    cout<<"\n"<<"Choose from the dropdown below:"<<"\n";
    cout<<"\n"<<"1.Push an element into the stack"<<"\n";
    cout<<"\n"<<"2.Pop an element from stack"<<"\n";
    cout<<"\n"<<"3.Display the stack"<<"\n";

    cin>>choice;

    switch(choice){
        case 1:
        cout<<"\n"<<"Enter the element you want to push onto the stack:"<<"\n";
        cin>>x;
        p->push(x);
        break;

        case 2:
        p->pop();
        break;

        case 3:
        p->display();
        break;
    
    }
    cout<<"\n"<<"Do you want to continue(YES=1,NO=0)"<<"\n";
    cin>>op;

    }while(op==1);

    return 0;
}