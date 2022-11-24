#define MAX 10
#include<iostream>
using namespace std;
class queue{

    int arr[MAX];
    int front;
    int rear;
    
    public:
    queue(){
        rear=front=-1;
    }
    int isEmpty();
    void enqueue();
    void display();
    void dequeue();
};

int queue::isEmpty(){
    if(front==-1 && rear==-1){
        cout<<"\n"<<"The queue is empty"<<"\n";
        return 1;
    }
    else{
        return 0;
    }
}

void queue::enqueue(){
    if(isEmpty()){
        front=rear=0;
        cout<<"\n"<<"Enter the data:"<<"\n";
        cin>>arr[rear++];
    }
    // else if(rear=MAX-1){
    //     cout<<"\n"<<"The queue is full"<<"\n";
    // }
    else{
       cout<<"\n"<<"Enter the data:"<<"\n";
        cin>>arr[rear++]; 
    }
}

void queue::display(){
    int i=front;
    if(!isEmpty()){
    //    while(i<=rear && i!=-1 && rear!=-1){
    //     cout<<arr[i++]<<"\t";
    //    }

    while(i<=rear){
        cout<<arr[i++]<<"\t";
       }
    }
}

void queue::dequeue(){
    int x;
    if(front==rear){
        x=arr[front];
        rear=front=-1;
    }
    else{
        x=arr[front];
        cout<<"\n"<<"The element that is deleted is:"<<"\n";
        cout<<x;
        front++;
    }
}

int main(){
    queue q;
    int choice,op;
    do{
    cout<<"\n"<<"Choose from the dropdown below:"<<"\n";
    cout<<"\n"<<"1.Add an element in queue"<<"\n";
    cout<<"\n"<<"2.Delete an element from queue"<<"\n";
    cout<<"\n"<<"3.Display the elements of queue"<<"\n";
    cin>>choice;
    switch (choice)
    {
    case 1:
        q.enqueue();
        break;
    
    case 2:
        q.dequeue();
        break;

    case 3:
        q.display();
        break;
    }
    cout<<"\n"<<"Do you want to continue?(YES=1,NO=0)"<<"\n";
    cin>>op;
    }while(op==1);
    return 0;
}