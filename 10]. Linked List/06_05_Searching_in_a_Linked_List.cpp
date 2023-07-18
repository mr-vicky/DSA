#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*first=NULL;

void create(int A[], int n){
    int i;
    Node *temp, *last;

    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1; i<n; i++){
        temp=new Node;
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

// Method 1: Iterative
// TC: O(n)
// SC: O(1)
Node* linearSearch(Node *p, int key){
    while(p!=NULL){
        if(key==p->data){
            return p;
        }
        p=p->next;
    }
    return NULL;
}

// Method 2: Recursive
// TC: O(n)
// SC: O(n)
Node* RlinearSearch(Node *p, int key){
    if(p==NULL){
        return NULL;
    }
    if(key==p->data){
        return p;
    }
    return RlinearSearch(p->next, key);
}

// It will print the linked list from the location of key
void display(Node* p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main()
{
    int A[]={2,4,6,8,10,12};
    int n=6;
    int key=8;

    create(A, n);
    // Iterative Method : 
    display(linearSearch(first, key));
    // Recursive Method : 
    display(RlinearSearch(first, key));
    return 0;
}