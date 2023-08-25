#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node *next;
};

class Stack{
    private: 
        Node *top;
    public: 
        Stack(){
            top=NULL;
        };
        void push(int x);
        int pop();
        void Display();
};

void Stack::push(int x){
    Node *temp = new Node;
    if( temp == NULL ){
        cout<<"Stack Overflow!\n";
    }
    else{
        temp->data = x;
        temp->next = top;
        top = temp;
    }
}

int Stack::pop(){
    Node *temp;
    int x = -1;
    if(top == NULL){
        cout<<"Stack UnderFlow!\n";
    }
    else{
        temp = top;
        top = top->next;
        x = temp->data;
        delete temp;
    }
    return x;
}

void Stack::Display(){
    Node *p = top;
    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    st.Display();

    cout<<st.pop()<<endl;

    st.Display();
    return 0;
}