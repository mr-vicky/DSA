#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// Method : Inplace Algorithm 
void reverse(string &str, int low, int high){
    while(low<=high){
        swap(str[low], str[high]);
        low++;
        high--;
    }
}

void reverseWords1(string &str){
    int n=str.length();
    int start=0;

    for(int end=0; end<n; end++){
        if(str[end]==' '){
            reverse(str, start, end-1);
            start=end+1;
        }
    }
    reverse(str, start, n-1);
    reverse(str, 0, n-1);
}

int main()
{
    string str="Welcome to world of coding";
    reverseWords1(str);

    for(auto x: str) cout<<x;
    cout<<endl;
    return 0;
}
