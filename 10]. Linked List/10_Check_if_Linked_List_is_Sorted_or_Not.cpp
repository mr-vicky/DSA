#include<iostream>
#include<limits.h>
using namespace std;

struct Node{
    int data;
    Node* next;
}*first=NULL;

void create(int A[], int n){
    Node *temp, *last;
    first = new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1; i<n; i++){
        temp = new Node;
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

void display(Node *first){
    while(first){
        cout<<first->data<<" ";
        first=first->next;
    }
    cout<<endl;
}

bool isSorted(Node *p){
    int x=INT_MIN;
    while(p){
        if(p->data<x){
            return false;
        }
        x=p->data;
        p=p->next;
    }
    return true;
}

int main(){
    int A[]{1, 2, 3, 4, 5};
    int n=5;
    create(A, n);
    display(first);

    // isSort function to check if the Linked List is sorted or not
    if(isSorted(first)){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }
    
    return 0;
}