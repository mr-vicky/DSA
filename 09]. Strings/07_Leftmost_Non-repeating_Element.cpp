#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// Naive Method:
// TC: O(n*n)
// SC: O(1)
int leftmostNonRepeatingChar1(string &str){
    int n=str.length();

    for(int i=0; i<n; i++){
        bool flag=false;
        for(int j=0; j<n; j++){
            if(i!=j && str[i]==str[j]){
                flag=true;
                break;
            }
        }
        if(flag==false){
            return i;
        }
    }
    return false;
}

// Method 2: Efficient Method: 
// TC: O(n)
// SC: O(CHAR)
int leftmostNonRepeatingChar2(string &str){
    int n=str.length();
    const int CHAR=257;
    int count[CHAR]{0};
    for(int i=0; i<n; i++){
        count[str[i]]++;
    }

    for(int i=0; i<n; i++){
        if(count[str[i]]==1){
            return i;
        }
    }
    return -1;
}

// Method 3: Highly Efficient 

int main()
{
    string str="applea";
    // Method 1: Naive
    cout<<leftmostNonRepeatingChar1(str)<<endl;

    // Method 2: Efficient (Two traversal)
    cout<<leftmostNonRepeatingChar2(str)<<endl;

    // Method 3: Highly Efficient (One traversal)
}
