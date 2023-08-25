#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
}*top=NULL;

void push(int x){
    Node *t = new Node;
    if(t == NULL){
        cout<<"Overflow Error!\n";
    }
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop(){
    int x = -1;
    if(top == NULL){
        cout<<"Underflow Error!\n";
    }
    else{
        Node *t=top;
        top = top->next;
        x = t->data;
        delete t;
    }
    return x;
}

void Display(){
    Node *p=top;
    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

int main(){
    push(10);
    push(20);
    push(30);

    Display();

    cout<<pop()<<"\n";

    Display();
    return 0;
}