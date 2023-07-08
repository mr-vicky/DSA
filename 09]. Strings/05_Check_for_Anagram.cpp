#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

// Method 1: By sorting both the Strings
// TC: O(n*log(n));
// SC: O(1)
bool isAnagram1(string &s1, string &s2){
    int m1=s1.length();
    int m2=s2.length();

    if(m1!=m2){
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1==s2;
}

// Method 2: 
// TC: O(n+CHAR)
// SC: O(CHAR)
const int CHAR=256;
bool isAnagram2(string &s1, string &s2){
    int m1=s1.length();
    int m2=s2.length();

    if(m1!=m2){
        return false;
    }

    int count[CHAR]{0}; // creating coun array and assigining 0 values to it

    for(int i=0; i<s1.length(); i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }

    for(int i=0; i<256; i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}

int main(){
    string s1="listen";
    string s2="silent";

    string s3="java";
    string s4="python";

    // Method 1: 
    cout<<boolalpha<<isAnagram1(s1, s2)<<endl;
    cout<<boolalpha<<isAnagram1(s3, s4)<<endl;
    cout<<endl;

    // Method 2: 
    cout<<boolalpha<<isAnagram2(s1, s2)<<endl;
    cout<<boolalpha<<isAnagram2(s3, s4)<<endl;
    return 0;
}