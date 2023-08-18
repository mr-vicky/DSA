#include<iostream>
using namespace std;

struct Node{
    int data=0;
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
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int count(Node *p){
    int count=0;
    while(p){
        count++;
        p=p->next;
    }
    return count;
}

int Delete(Node *first, int pos){
    Node *q=NULL, *p=first;

    int x=-1;

    if(pos<1 || pos>count(first)){
        return x;
    }

    if(pos==1){
        q=first;
        x=first->data;
        first=first->next;
        delete q;
        return x;
    }
    else{
        for(int i=0; i<pos-1; i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete p;
        return x;
    }
}

int main(){
    int A[]{2, 3, 4, 5, 6};
    int n=5;

    create(A, n);
    display(first);

    Delete(first, 4);

    // Delete(first, 1);// This Code has a problem in deleting the first node

    display(first);
    return 0;
}