#include<iostream>
#include<string>
using namespace std;

// Method 1: Iterative solution(Recommended)
// TC: O(m+n)
// SC: O(1)
bool isSubsequence(string &s1, string &s2, int n, int m){
    int j=0; 

    if(n<m){
        return false; // if the s1 < s2, then its not going to the ubsequence of s1
    }
    for(int i=0; i<n && j<m; i++){
        if(s1[i]==s2[j]){
            i++;
            j++;
        }
    }
    return j==m;
}

// Method 2: Recursive Solution
// TC: O(m+n)
// SC: O(m+n)
bool isSubsequenceR(const string &s1, const string &s2, int n, int m){
    if(m==0){
        return true;
    }
    if(n==0){
        return false;
    }
    if(s1[n-1]==s2[m-1]){
        isSubsequenceR(s1, s2, n-1, m-1);
    }
    else{
        isSubsequenceR(s1, s2, n-1, m);
    }
}

int main(){
    // Iterative Solution
    string s1="ABCD";
    string s2="AD";
    cout<<boolalpha<<isSubsequence(s1, s2, 4, 2)<<endl;

    string s3="ABCE";
    string s4="AED";
    cout<<boolalpha<<isSubsequence(s3, s4, 4, 3)<<endl<<endl;

    // Recursive Solution
    cout<<boolalpha<<isSubsequenceR(s1, s2, 4, 2)<<endl;
    cout<<boolalpha<<isSubsequenceR(s3, s4, 4, 3)<<endl;
    return 0;
}