#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

class Stack{
    private:
        Node* top;
    public: 
        Stack(){top = NULL;}
        void push(int x);
        int pop();
        void Display();
        bool isEmpty();
        bool isFull();
        int peek(int pos);
};

void Stack::push(int x){
    Node* temp = new Node;
    if(temp == NULL)
        cout << "Stack is Full!" << endl;
    else{
        temp -> data = x;
        temp -> next = top;
        top = temp;
    }
}

int Stack::pop(){
    int x = -1;
    if(top == NULL)
        cout << "Stack is Empty!" << endl;
    else{
        x = top -> data;
        Node *temp = top;
        top = top -> next;
        delete temp;
    }
    return x;
}

void Stack::Display(){
    Node* p = top;
    while(p){
        cout << p -> data << " ";
        p = p -> next;
    }
    cout << endl;
}

bool Stack::isEmpty(){
    if(top == NULL)
        return true;
    return false;
}

bool Stack::isFull(){
    Node *temp = new Node;
    if(temp == NULL)
        return true;
    return false;
}

int Stack::peek(int pos){
    Node* p = top;
    pos = pos - 1;

    while(p && pos--){
        p = p -> next;
    }
    return p -> data;
}
int main(){
    Stack st;
    cout << boolalpha << st.isEmpty() << endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.Display();

    cout << boolalpha << st.isFull() << endl;

    cout << st.pop() << endl;
    st.Display();

    cout << st.peek(4) << endl;
    return 0;
}