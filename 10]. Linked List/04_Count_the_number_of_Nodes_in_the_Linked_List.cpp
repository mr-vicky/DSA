#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*first=NULL;

void create(int A[], int n){
    int i;
    Node *t, *last;

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

// Method 1: Iterative Approach
// TC: O(n)
// SC: O(1)
int countNodes(Node *first){
    int count=0;
    while(first!=NULL){
        count++;
        first=first->next;
    }
    return count;
}

// Method 2: Recursive Approach
// TC: O(n)
// SC: O(n)
int RcountNodes(Node *first){
    if(first==NULL){
        return 0;
    }
    else{
        return 1+RcountNodes(first->next);
    }
}

int main()
{
    int A[]{10, 20, 30, 40, 50, 60};
    int n=6;
    create(A, n);
    cout<<countNodes(first); // Iterative Approach
    cout<<endl; 
    cout<<RcountNodes(first); // Recursive Approach
    return 0;
}