#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// Method 1: Using the Rverse function
// TC: O(n)
// SC: O(n)
bool isPalindrome1(string &str){
    string rev = str;
    reverse(str.begin(), str.end());
    return (str==rev);
}

// Method 2: Two Pointer Method
// TC: O(n)
// SC: O(1)
bool isPalindrome2(string &str){
    int i=0;
    int j=str.length()-1;
    while(i<j){
        if(str[i]!=str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{   
    string s1="MADAM";
    string s2="Vicky";

    cout<<boolalpha<<isPalindrome1(s1)<<endl;
    cout<<boolalpha<<isPalindrome1(s2)<<endl;
    cout<<endl;

    cout<<boolalpha<<isPalindrome2(s1)<<endl;
    cout<<boolalpha<<isPalindrome2(s2)<<endl;
    return 0;
}
