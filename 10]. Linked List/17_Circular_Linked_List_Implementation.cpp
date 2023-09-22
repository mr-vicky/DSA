#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;

}*head=NULL;


void create(int A[], int n){
    Node *temp, *last;

    head = new Node;
    head->data = A[0];
    head->next = head;
    last = head;

    for(int i=1; i<n; i++){
        temp = new Node;
        temp->data = A[i];
        temp->next = last->next;;
        last->next = temp;
        last = temp;
    }
}

// Display a Circular Linked List
void display(Node *head){
    Node *p = head;
    do{
        cout<<p->data<<" ";
        p = p->next;
    }while( p != head );
    cout<<endl;
}

// Disaplay a Circular Linked List using Recursion
void Rdisplay(Node *p){
    static int flag = 0;
    if( p != head || flag == 0){
        flag = 1;
        cout<<p->data<<" ";
        Rdisplay( p->next );
    }
    flag = 0;
}

int main()
{
    int A[]{1, 2, 3, 4, 5, 6};
    create(A, 6);
    display(head);
    Rdisplay(head);
    return 0;
}
