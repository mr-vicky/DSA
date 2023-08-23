#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node *next;
};

class LinkedList{
    private:
        Node *first;

    public:
        LinkedList(){first=NULL;};
        LinkedList(int A[], int n);
        ~LinkedList();

        void Display();
        void Insert(int index, int x);
        int Delete(int index);
        int Length();
};

LinkedList::LinkedList(int A[], int n){
    Node *temp, *last;

    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last=first;

    for(int i = 1; i < n; i++){
        temp = new Node;
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

LinkedList::~LinkedList(){
    Node *p = first;
    while(first){
        first = first->next;
        delete p;
        p = first;
    }
}

void LinkedList::Display(){
    Node *p = first;
    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }
}

int LinkedList::Length(){
    Node *p = first;
    int len = 0;
    while(p){
        len++;
        p = p->next;
    }
    return len;
}

void LinkedList::Insert(int index, int x){
    Node *p = first;
    if(index < 0 || index > Length()){
        return;
    }

    Node *t;
    t = new Node;
    t->data = x;
    t->next = NULL;

    if( index == 0){
        t->next = first;
        first = t;
    }
    else{
        for(int i = 0; i < index-1; i++){
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

int LinkedList::Delete(int index){
    Node *p = first, *q = NULL;

    if(index < 0 || index > Length() ){
        return -1;
    }

    Node *t;
    int x=0;

    if( index == 1 ){
        p = first;
        x = first->data;
        first = first->next;
        delete t;
    }
    else{
        p = first;
        for(int i=0; i<index-1; i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
    }
    return x;
}

int main()
{
    Node *head=NULL;
    int A[]{1, 2, 3, 4, 5};
    int n = 5;

    LinkedList l1(A, 5);

    cout<<l1.Length()<<endl;
    // l1.Delete(3);
    l1.Insert(0, 100);
    l1.Display();
    return 0;
}
