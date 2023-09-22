# include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*first = NULL;

void create(int A[], int n){
    Node *temp, *last;

    first = new Node;
    first -> data = A[0];
    first -> next = NULL;
    last = first;

    for(int i = 1; i < n; i++){
        temp = new Node;
        temp -> data = A[i];
        temp -> next = NULL;
        last -> next = temp;
        last = temp; 
    } 
    last -> next = first;
}

void display(Node *first){
    Node *p = first;
    while(p -> next != first){
        cout<< p -> data <<" ";
        p = p -> next;
    }
    cout<< p -> data <<endl;
}

// Deletion in Circular Linked List
// TC: O(n)
// SC: O(1)
int Delete(Node *p, int n, int pos){
    int x = -1;

    if( 0 > pos || pos >  n ){
        return -1;
    }

    if(pos == 1){
        p = first;
        while(p->next != first){
            p = p -> next;
        }
        x = first -> data;
        if( p == first ){
            delete first;
            first = NULL;
        }
        else {
            p -> next = first -> next;
            delete first;
            first = p -> next;
        }
    }
    else{
        Node *q = NULL;
        for(int i = 0; i < pos-2; i++)
            p = p -> next;

        q = p -> next;
        p -> next = q -> next;
        x = q -> data;
        delete q;
    }

    return x;
}

int main(){
    int A[]{1, 2, 3, 4, 5 };
    int n = 5;

    create(A, n);
    display(first);

    // Deleting the Node at given position
    int pos = 5;
    cout<< Delete(first, n, pos)<<endl;

    display(first);
    return 0;
}