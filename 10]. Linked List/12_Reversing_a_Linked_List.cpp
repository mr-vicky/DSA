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

// Method 1: Reversing the Elements in the Linked List by using a extra memory(array)
// TC: O(n)
// SC: O(n)
void reverse1(Node *p, int n){
    int A[n]{0};
    int i=0;
    while(p){
        A[i]=p->data;
        p=p->next;
        i++;
    }
    i--;
    p=first;
    while(p){
        p->data=A[i];
        i--;
        p=p->next;
    }
}


// Method 2: Reversing the links of the Linked List (Efficient)
// TC: O(n)
// SC: O(1)
Node* reverse2(Node *first){
    Node *p=first, *q=NULL, *r=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
    return first;
}

int main()
{
    int A[]{1, 2, 3, 4, 5};
    int n=5;

    create(A, n);
    display(first);

    // Method 1: Reversing the Elements of the Nodes
    reverse1(first, n);
    display(first);
    
    // Method 2: Reversing the Links of the Nodes
    display(reverse2(first));
     return 0;
}