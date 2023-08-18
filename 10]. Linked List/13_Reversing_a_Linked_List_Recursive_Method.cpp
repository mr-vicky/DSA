#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
}*first=NULL;

void create(int A[], int n)
{
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

void display(Node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

// Recursive method to reverse a linked list
void reverse(Node *q, Node*p){
    if(p!=NULL){
        reverse(p, p->next);
        p->next=q;
    }
    else{
        first=q;
    }
}

int main()
{
    int A[]{1, 2, 3, 4, 5};
    int n=5;
    display(first);


    create(A, n);
    reverse(NULL, first);

    display(first);
     return 0;
}