#include<iostream>
#include<string>
#include<algorithm>
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

// Method 3: By traversing from right side of the string and by using the visited array 
// TC: O(n)
// SC: O(1)
int leftMostRepeatingCharacter3(string str){
    const int CHAR=256;
    bool visited[CHAR];
    int res=0;
    fill(visited, visited+CHAR, false);

    for(int i=str.length()-1; i>=0; i--){
        if(visited[str[i]]){
            res=i;
        }
        else{
            visited[str[i]]=true;
        }
    }
    return res;
}

int main()
{
    string str="abccb";
    // Method 1: Naive Method
    cout<<leftMostRepeatingCharacter1(str)<<endl;

    // Method 2: 
    cout<<leftMostRepeatingCharacter2(str)<<endl;

    // Method 3: 
    cout<<leftMostRepeatingCharacter3(str)<<endl;

    return 0;
}
