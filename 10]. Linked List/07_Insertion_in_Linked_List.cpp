#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*first=NULL;

// Function to create a Linked List
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

// Function to get the length of the linked list
int getLength(Node *p){
    int count=0;
    while(p){
        count++;
        p=p->next;
    }
    return count;
}

// Function to display a Linked List
void display(Node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}

// Insertion of Linked List
void Insert(int pos, int x){
    if(pos < 0 && pos < getLength(first)){
        return;
    }

    Node *p, *t;
    if(pos==0){
        t=new Node;
        t->data=x;
        t->next=first;
        first=t;
    }
    else if(p>0){
        p=first;
        for(int i=0; i<pos-1 && p; i++){
            p=p->next;
        }

        if(p!=NULL){
            t=new Node;
            t->data=x;
            t->next=p->next;
            p->next=t;
        }
    }
}

int main()
{
    int A[]{1, 2, 3, 4};
    int n=4;

    create(A, n); // Creating a linked List

    Insert(0, 99); // Inserting 99 before first Node
    Insert(3, 100); // Inserting 100 after 3 Node
    Insert(6, 88); // Inserting the 88 after the last node
    display(first);
    return 0;
}