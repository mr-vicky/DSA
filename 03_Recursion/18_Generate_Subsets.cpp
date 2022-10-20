#include<iostream>
#include<string.h>
using namespace std;

void printSubstring(string s, string curr, int i){
    
    if(i==s.length()){
        cout<<curr<<" ";
        return;
    }
    
    printSubstring(s, curr, i+1);
    printSubstring(s, curr+s[i], i+1);
}

int main()
{
    string s="ABC";
    printSubstring(s, " ", 0);
    return 0;
}