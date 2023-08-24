#include<iostream>
using namespace std;

struct Stack{
    int size;
    int top;
    int *S;
};

// Function to create a Stack using array
void create(Stack *st){
    cout<<"Enter the size of the Stack: ";
    cin>>st->size;
    st->top = -1;
    st->S = new int[st->size];
}

// Function to display the elements in the Stack
void Display(Stack st){
    for(int i = st.top; i >= 0; i--){
        cout<<st.S[i]<<" ";
    }
    cout<<endl;
}

// Function to push a value in the stack
void push(Stack *st, int x){
    if(st->top == st->size-1){
        cout<<"Stack Overflow!"<<endl;
    }
    else
    {
        st->top++;
        st->S[st->top]=x;
    }
} 

// Function to pop an value from the Stack
int pop(Stack *st){
    int x = -1;
    if(st->top == -1){
        cout<<"Stack Underdflow!"<<endl;
    }
    else
    {
        x = st->S[st->top--];
    }
    return x;
}

// Function to get the element at the given position
int peek(Stack st, int index){
    int x = -1;
    if(st.top-index+1 < 0){
        cout<<"Invalid Indedx!"<<endl;
    }
    x = st.S[st.top-index+1];
    return x;
}

// Function to check if the stack is Full or not
int isFull(Stack st){
    if(st.top == st.size-1)
        return true;
    else
        return false;
}

// Function to check if the stack is Empty or not
int isEmpty(Stack st){
    if(st.top == -1)
        return true;
    else 
        return false;
}

// Function to get the top most value of the stack
int stackTop(Stack st){
    if(!isEmpty(st))   
        return st.S[st.top];
    return -1;
}

int main(){
    Stack st;
    create(&st);

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    push(&st, 50);
    push(&st, 60);

    // Deleting the Elements from the Stack -->
    // cout<<pop(&st)<<endl; // Deleted Top-> 50
    // cout<<pop(&st)<<endl;
    // cout<<pop(&st)<<endl;
    Display(st);

    // cout<<isEmpty(st);

    // cout<<isFull(st);

    cout<<peek(st, 2);

    cout<<"\nStackTop: "<<stackTop(st)<<endl;
    return 0;
}