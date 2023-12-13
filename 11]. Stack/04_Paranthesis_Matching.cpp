#include<iostream>
using namespace std;

class Stack{
    public:
        int size;
        int top;
        char *S;
        void push(char x);
        void pop();
        void Display();
        bool isEmpty();
};

void Stack::push(char x){
    top++;
    S[top] = x;
}   

void Stack::pop(){
    top--;
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

bool isBalanced(string str){
    Stack st;
    st.size = str.length();
    st.top = -1;
    st.S = new char[st.size];

    for(auto c: str){
        if(c == '('){
            st.push(c);
        }
        else if(c == ')'){
            if(st.isEmpty()) return false;
            st.pop();
        }
    }
    return (st.isEmpty())? true:false;
}

int main()
{
    string str = "(a+b+(c-d)*(z))";
    cout << boolalpha << isBalanced(str);
    return 0;
}
