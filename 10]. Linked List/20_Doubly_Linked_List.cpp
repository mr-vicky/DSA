# include <iostream>
using namespace std;

struct Node{
    Node *prev;
    int data;
    Node *next;
}*first = NULL, *last_node = NULL;

void create(int A[], int n){
    Node *temp, *last;
    first = new Node;
    first -> data = A[0];
    first -> prev = NULL;
    first -> next = NULL;
    last = first;

    for(int i = 1; i < n; i++){
        temp = new Node;
        temp -> data = A[i];
        temp -> next = last -> next;
        temp -> prev = last;
        last -> next = temp;
        last = temp;
        last_node = temp;
    }
}

void Display(){
    Node *p = first;
    while(p){
        cout << p -> data << " ";
        p = p -> next;
    }
    cout << endl;
}

void DisplayReverse(){
    Node *p = last_node;
    while(p){
        cout << p -> data << " ";
        p = p -> prev;
    }
    cout << endl;
}

int main(){
    int A[]{1, 2, 3, 4, 5};
    int n = 5;
    create(A, n);
    Display();
    DisplayReverse();
    
    return 0;
}