//EVALUATION OF PREFIX AND POSTFIX EXPRESSION
#include<iostream>
#include<cstring>
using namespace std;

struct node{
    int data;
    node*next;
}*top;

class evaluation{
    public:
    evaluation(){
        top==NULL;
    }
    
    int isEmpty();
    void push(int x);
    void eval_prefix(char prefix[]);
    void eval_postfix(char postfix[]);
    int pop();
};

int evaluation::isEmpty(){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void evaluation::push(int x){
    node*p=new node;
    p->data=x;
    p->next=NULL;
    if(isEmpty()){
        top=p;
    }
    else
    {
        p->next=top;
        top=p;
    }
}

int evaluation::pop(){
    node *q;
    int x;
    q=top;
    x=q->data;
    top=top->next;
    delete q;
    // cout<<"\n"<<"The element that is popped out is:"<<"\t";
    // cout<<x;
    return x;
}

void evaluation::eval_prefix(char prefix[]){
    int i = (strlen(prefix)-1),val,a,ans;
    char op1,op2,temp;

    while(i>=0){
        temp=prefix[i];
        if(isalpha(temp)){
            cout<<"\n"<<"Enter the value of character:"<<"\n";
            cin>>val;
            push(val);
        }
        else{
            op1=pop();
            op2=pop();

            switch(temp){
                case '+':
                a=op1+op2;
                push(a);
                break;

                case '-':
                a=op1-op2;
                push(a);
                break;

                case '*':
                a=op1*op2;
                push(a);
                break;

                case '/':
                a=op1/op2;
                push(a);
                break;

            }
        }
        i--;
    }
    ans=pop();
    cout<<"\n"<<"The value after the evlauation of the expression is:"<<"\n";
    cout<<ans;
}


void evaluation::eval_postfix(char postfix[]){
    int i=0,val,a,ans;
    char op1,op2,temp;

    while((i<=strlen(postfix)-1)){
        temp=postfix[i];
        if(isalpha(temp)){
            cout<<"\n"<<"Enter the value of character:"<<"\n";
            cin>>val;
            push(val);
        }
        else{
            op2=pop();
            op1=pop();

            switch(temp){
                case '+':
                a=op1+op2;
                push(a);
                break;

                case '-':
                a=op1-op2;
                push(a);
                break;

                case '*':
                a=op1*op2;
                push(a);
                break;

                case '/':
                a=op1/op2;
                push(a);
                break;

            }
        }
        i++;
    }
    ans=pop();
    cout<<"\n"<<"The value after the evlauation of the expression is:"<<"\n";
    cout<<ans;
}


int main(){
    char prefix[30],postfix[30];
    evaluation e;
    cout<<"\n"<<"Enter the prefix expression:"<<"\n";
    cin>>prefix;
    e.eval_prefix(prefix);

    cout<<"\n"<<"Enter the postfix expression:"<<"\n";
    cin>>postfix;
    e.eval_postfix(postfix);
    return 0;
}
