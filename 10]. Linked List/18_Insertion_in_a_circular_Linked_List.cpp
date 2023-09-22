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

// Inserting a New Node in a Circular Linked List
// TC: O(n)
// SC: O(1)
void insert(int pos, int x, int n){
    Node *p = first, *temp;
    
    if(0 <= pos && pos <= n+1){

        if( pos == 0 || pos == n+1){
            temp = new Node;
            temp -> data = x;
            temp -> next = first;


            if(first == NULL){
                first = temp;
                first -> next = first;
            }
            else{
                while( p -> next != first ){
                    p = p->next;
                }
                p -> next = temp;
            }

            if(pos == 0)
                first = temp;
        }
        else{
            while( pos - 1){
                p = p -> next;
                pos--;
            }
            temp = new Node;
            temp -> data = x;
            temp -> next = p -> next;
            p -> next = temp;
        }
    }
}

int main(){
    int A[]{1, 2, 3, 4, 5 };
    int n = 5;

    create(A, n);
    display(first);

    int pos = 0;
    int x = 100;
    insert(pos, x, n);

    display(first);

    return 0;
}