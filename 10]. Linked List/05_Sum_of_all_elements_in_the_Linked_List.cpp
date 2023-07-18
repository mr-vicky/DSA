#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*first=NULL;

void create(int A[], int n){
    Node *t, *last;
    int i;

    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1; i<n; i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

// Method 1: Iterative Method
// TC: O(n)
// SC: O(1)
int getSum(Node *p){
    int sum=0;
    while(p){
        sum = sum + p->data;
        p=p->next;
    }
    return sum;
}

// Method 2: Recursive Method
// TC: O(n)
// SC: O(n)
int RgetSum(Node *p){
    if(p==NULL){
        return 0;
    }
    else{
        return getSum(p->next)+p->data;
    }
}

int main()
{
    int A[]={10, 10, 10};
    int n=3;
    create(A, n);
    cout<<getSum(first)<<endl; // Iterative Method
    cout<<RgetSum(first)<<endl; // Recursive Method
    return 0;
}