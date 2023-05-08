#include<iostream>
#include<string>
using namespace std;

int main()
{
    // _________________________________________________ C Style Strings __________________________________________________________

    cout<<endl<<"__________________ C style Strings __________________"<<endl;

    // Declaration 1 : with " "
    cout<<"Lenght of string when declared in the double quotes: "<<endl;
    char str1[] = "Vicky";
    cout<<sizeof(str1)<<endl; // it prints 6 because after the end of the last character it compiler automatically puts '/0'

    cout<<"Lenght of string when declared in the single quotes: "<<endl;
    char str2[] = {'V', 'i', 'c', 'k', 'y'}; // when we use single quote it does not puts '/0' at last
    cout<<sizeof(str2)<<endl;

    // ---------------------------------------------- Functions in c++ -----------------------------------------------------------> 

    // 1. strlen(str): Used to find the length of the string

    // 2. strcmp(string_1, string_2): It compares two strings lexicogrphically, 
    //                   - if first string is greater than the second string then it returns the positive value
    //                   - If both the strings are lexicogrphically same then it returns 0;
    //                   - if the first string is lexicographically saller then it retuens the -ve value.

    // 3. srtcpy(string_name, string_to_be_assigned): To assign string to an uninitilized char string variable



    // _________________________________________________ C++ Strings __________________________________________________________

    cout<<endl<<"__________________ C++ style Strings __________________"<<endl;
    string s1 = "Vivek";
    cout<<"s1 = "<<s1<<endl;
    cout<<"Lenght of the string s1 [s1.length()]: "<<s1.length()<<endl;
    s1 = s1 + "Sarade";

    cout<<"s1 (after adding Sarade): "<<s1<<endl;

    // string_name.substr(starting_idx, length_of_substring) : This function is used to get the substring from the given index and of required size 
    cout<<"s1.substr(3, 4) = "<<s1.substr(3, 4)<<endl;

    // string_name.find(sub_string): This function is used to return(find) the index of the given string if it is present 
    cout<<"s1.find(Sar) = "<<s1.find("Sar")<<endl;

    string s3 = "Vicky";
    string s4 = "Sarade";

    if(s3==s4)
        cout<< "Same";
    else if(s3 > s4)
        cout<<"s3 is Lexicographically Greater than the s4";
    else if(s3 < s4)
        cout<<"s3 is Lexicographically Smaller than the s4";


    // ------------------------------- INPUT in C++ ------------------------------
    // getline(cin, str_name): To read the input with spaces in between 
    // getline(cin, str_name, 'a'): This will read the input before the 'a', it will stop reading when 'a' occures\

    cout<<endl<<"__________________Taking Strings as Input __________________"<<endl;
    cout<<"Enter your name: ";

    string str_name = "";
    getline(cin, str_name);

    cout<<str_name<<endl;

    // Note: It is recommended to use the C++ style strings over C style string

    // ------------------------------- Accessing the C++ style strings ------------------------------

    for(int i=0; i<s4.length(); i++)
    {
        cout<<s4[i];
    }
    cout<<endl;
    
    for(auto x: s4)
    {
        cout<<x;
    }

    return 0;
}
