// NOTE -> This program only works for the single digit numbers(operands)
#include<iostream>
#include<stack>
using namespace std;

// Stack Implementation -------->
class Stack{
    public:
        int size;
        int top;
        int *S;
        void push(int x);
        int pop();
        void Display();
        bool isEmpty();
        int stackTop();
};

void Stack::push(int x){
    top++;
    S[top] = x;
}   

int Stack::pop(){
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

int Stack::stackTop(){
    if(top != -1)
        return S[top];
}
//<------------- 

// TC: O(n)
bool isOperand(char x){
    if(x == '+' || x == '-' || x == '/' || x == '*')
        return false;
    return true;
}

int evaluate(string postfix){
    Stack stk;
    stk.top = -1;
    stk.size = postfix.length();
    stk.S = new int[stk.size];
    int res = 0;

    for(int i = 0; i < postfix.size(); i++){
        if(isOperand(postfix[i])){
            stk.push(postfix[i] - '0');
        }
        else{
            int x2 = stk.pop();
            int x1 = stk.pop();
            switch (postfix[i]){
                case '+':
                    res = x1 + x2;
                    break;

                case '-':
                    res = x1 - x2;
                    break;
                
                case '*':
                    res = x1 * x2;
                    break;

                case '/': 
                    res = x1 / x2;
                    break;
            }
            stk.push(res);
        }
    }
    return stk.pop();
}

int main(){   
    string postfix1 = "35*62/+4-";
    cout << evaluate(postfix1) << endl;

    string postfix2 = "234*+82/-";
    cout << evaluate(postfix2) << endl;
    return 0;
}
