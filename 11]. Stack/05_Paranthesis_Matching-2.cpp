#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isBalanced(string exp){
    stack<int>st;
    for(auto c: exp){
        if(c == '(' || c == '[' || c == '{'){
            st.push(c);
        }
        else if(c == ')'){
            if(st.top() == '(') st.pop();
            else{
                return false;
            } 
        }
        else if(c == ']'){
            if(st.top() == '[') st.pop();
            else{
                return false;
            }
        }
        else if(c == '}'){
            if(st.top() == '{') st.pop();
            else{
                return false;
            }
        }
    }
    return st.empty();
}

int main()
{
    string exp1 = "{(a+b)-[c*d(()z-y)]+{a-c}}";   
    cout << boolalpha << isBalanced(exp1) << endl;

    string exp2 = "{a_c+x(a+vo_d=sd[+crwqd[[[]]]])}";   
    cout << boolalpha << isBalanced(exp2) << endl;
    return 0;
}