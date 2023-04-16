#include<iostream>
#include<string>
using namespace std;

// This function only works for lowercase letters only 
void getFrequencies(string str)
{
    int count[26]={0};

    for(int i=0; i<str.length(); i++)
        count[str[i]-'a']++;

    for(int i=0; i<26; i++)
        if(count[i]>0)
            cout<<(char)(i +'a')<<" "<<count[i]<<endl;
}


int main()
{
    string str="viveksarade";
    getFrequencies(str);
    return 0;
}
