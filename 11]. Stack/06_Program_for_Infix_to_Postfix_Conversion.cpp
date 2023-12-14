#include<iostream>
#include<stack>
using namespace std;

// Stack Implementation -------->
class Stack{
    public:
        int size;
        int top;
        char *S;
        void push(char x);
        char pop();
        void Display();
        bool isEmpty();
        char stackTop();
};

void Stack::push(char x){
    top++;
    S[top] = x;
}   

char Stack::pop(){
    return S[top--];
}

void Stack::Display(){
    int i = top;
    while(i--){
        cout << S[i] << " ";
    }
    cout << endl;
}

bool Stack::isEmpty(){
    return (top == -1);
}

char Stack::stackTop(){
    if(top != -1)
        return S[top];
}
//-------------> 

bool isOperand(char x){
    if(x == '+' || x == '-' || x == '*' || x == '/'){
        return false;
    }
    else{
        return true;
    }
}

int precedence(char x){
    if(x == '+' || x == '-'){
        return 1;
    }
    else if(x == '*' || x == '/'){
        return 2;
    }
}

// TC: O(n)
// SC: O(n)
char* convert_infix_to_postfix(string infix){
    int n = infix.length();
    Stack stk;
    stk.size = n;
    stk.top = -1;
    stk.S = new char[stk.size];

    char* postfix = new char[n];
    int i = 0, j = 0;
    while(i < n){
        if(isOperand(infix[i])){
            postfix[j++] = infix[i++];
        }
        else{
            if(precedence(infix[i]) > precedence(stk.stackTop())){
                stk.push(infix[i++]);
            }
            else{
                postfix[j++] = stk.pop();
            }
        }
    }
    while(!stk.isEmpty()){
        postfix[j++] = stk.pop();
    }
    return postfix;
}

int main()
{   
    string infix = "a+b*c-d/e";
    cout << "Infix form: " << infix << endl;
    cout << "Postfix form: " << convert_infix_to_postfix(infix) << endl;
    return 0;
}
