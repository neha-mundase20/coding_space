#include<iostream>
#define MAX 10
using namespace std;

class circular_queue{
    private:
    int arr[MAX];
    int f,r;

    public:
    circular_queue(){
        f=r=-1;
    }

    int isEmpty();
    int isFull();
    void enqueue(int x);
    void dequeue();
    void display();
};

int circular_queue::isEmpty(){
    if(f==r==-1){
            return 1;
        }
        else{
            return 0;
        }
}

int circular_queue::isFull(){
    if(f==(r+1)%MAX){
        return 1;
    }
    else{
        return 0;
    }
}

void circular_queue::enqueue(int x){
    if(isFull()){
        cout<<"\n"<<"The queue is full"<<"\n";
    }
    else{
        r=(r+1)%MAX;
        arr[r]=x;
    }
}

void circular_queue::dequeue(){
    int temp;
    if(r==f){
        temp=arr[f];
        f=r=-1;
    }
    else{
        temp=arr[f];
        f=(f+1)%MAX;
    }
}

void circular_queue::display(){
    int i=f;
    while(i<=r){
        cout<<arr[i]<<"\t";
        i++;
    }
}

int main(){
    int choice;
    circular_queue q;
    do{
    cout<<"\n"<<"Choose from the dropdown below:"<<"\n";
    cout<<"\n"<<"1.Enqueue"<<"\n";
    cout<<"\n"<<"2.Dequeue"<<"\n";
    cout<<"\n"<<"3.Display";
    cout<<"\n"<<"4.Exit"<<"\n";
    cin>>choice;

    switch(choice){
        case 1:
        int val;
        cout<<"\n"<<"Enter the data you want to enqueue:"<<"\n";
        cin>>val;
        q.enqueue(val);
        break;

        case 2:
        q.dequeue();
        break;

        case 3:
        q.display();
        break;

        case 4:
        break;

    }
    }while(choice!=4);
    return 0;
}