#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
}*first=NULL;


void create(int A[], int n){
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
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

// Remove Duplicates in the Sorted Linked List
void RemoveDuplicates(Node *first){
    Node *p=first;
    Node *q=p->next;

    while(q!=NULL){
        if(p->data!=q->data){
            p=p->next;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
}

int main(){
    int A[]{2, 2, 2, 2, 5, 5, 8, 8, 8, 9};
    int n=10;
    create(A, n);
    display(first);

    // Function to Remove Duplicates in the Sorted Linked List
    RemoveDuplicates(first);

    display(first);
    
    return 0;
}