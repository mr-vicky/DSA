#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* create(int A[], int n){
    Node *temp, *last, *first;
    
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
    return first;
}

void display(Node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

// Concatinating the two Linked List
// TC: O(n)
// SC: (1)
void concatinate(Node* first, Node* second){
    Node *p=first;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=second;
    second=NULL;
}

int main(){
    int A[]{2, 3, 5, 6, 7};
    int n=5;
    Node *first = create(A, n); // creating 1st Linked List

    int B[]{8, 9, 10};
    int m=3;
    Node *second = create(B, m);

    display(first);
    display(second);

    // Concatinating the two linked lists
    concatinate(first, second);

    display(first);
    
    return 0;
}