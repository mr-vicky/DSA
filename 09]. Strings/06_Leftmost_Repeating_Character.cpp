#include<iostream>
using namespace std;

// Method 1: Naive Method
// TC: O(n*n)
// SC: O(1)
int leftMostRepeatingCharacter1(string &str){
    int n=str.length();
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(str[i]==str[j]){
                return i;
            }
        }
    }
    return -1;
}

// Method 2: By storing the frequencies
int leftMostRepeatingCharacter2(string &str){
    int n=str.length();
    const int CHAR=256;
    int count[CHAR]{0};

    for(int i=0; i<n; i++){
        count[str[i]]++;
    }

    for(int i=0; i<n; i++){
        if(count[str[i]]>1){
            return i;
        }
    }
    return -1;
}

int main()
{
    string str="abccb";
    // Method 1: Naive Method
    cout<<leftMostRepeatingCharacter1(str)<<endl;

    // Method 2: 
    cout<<leftMostRepeatingCharacter2(str)<<endl;

    return 0;
}
