#include<iostream>
using namespace std;

// Natural Numbers: 1, 2, 3, 4,...
// fun(n)=1+2+......+(n-1)+n

// Rercursive solution
int sum(int n){
    if(n==0)    return 0;
    return sum(n-1)+n;
}

// Algebric solution
int sumA(int n){
    return n*(n+1)/2;
}

int main(){

    cout<<sum(2)<<"\n";
    cout<<sumA(2)<<"\n";

    return 0;
}