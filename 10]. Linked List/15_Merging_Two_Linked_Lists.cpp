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

Node* mergeTwoLists(Node* first, Node* second) {
    Node *third, *last;
    
    if(first==NULL)
        return second;
    else if(second==NULL) 
        return first;
    
    if(first->data <= second->data){
        third=first;
        last=first;
        first=first->next;
        last->next=NULL;
    }
    else
    {
        third=second;
        last=second;
        second=second->next;
        last->next=NULL;
    }

    while(first!=NULL && second!=NULL)
    {
        if(first->data <= second->data){
            last->next=first;
            last=first;
            first=first->next;
            last->next=NULL;
        }
        else
        {
            last->next=second;
            last=second;
            second=second->next;
            last->next=NULL;
        }
    }
    if(first!=NULL){
        last->next=first;
    }
    else
    {
        last->next=second;
    }

    return third;
}

int main(){
    int A[]{1, 2, 3};
    int n=3;
    Node *first = create(A, n); // creating 1st Linked List

    int B[]{1, 2, 4};
    int m=3;
    Node *second = create(B, m);

    display(first);
    display(second);

    // Merging the two linked lists
    Node* third = mergeTwoLists(first, second);

    display(third);
    return 0;
}
