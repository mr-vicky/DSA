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

void display(Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

void sortedInsert(Node *p, int x){
    Node *t, *q=NULL;

    t=new Node;
    t->data=x;
    t->next=NULL;

    if(first==NULL){
        first=t;
    }
    else{
        while((p) && (p->data < x)){
            q=p;
            p=p->next;
        }
        if(p==first){
            t->next=first;
            first=t;
        }
        else {
            t->next=q->next;
            q->next=t;
        }
    }
}

int main(){
    int A[]{3, 7, 9, 15, 20};
    int n=5;

    create(A, n);
    display(first); // Displaying the Linked List
    sortedInsert(first, 18);
    display(first);
    return 0;
}