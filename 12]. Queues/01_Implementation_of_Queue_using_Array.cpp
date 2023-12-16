#include <iostream>
using namespace std;

struct Queue{
    int size;
    int Front;
    int Rear;
    int *Q;
};

void enqueue(Queue* q, int x){
    if(q -> Rear == q -> size-1 ){
        cout << "Queue is FULL!" << endl;
    }
    else{
        q -> Rear++;
        q-> Q[q -> Rear] = x; 
    }
}

int dequque(Queue* q){
    int x = -1;
    if(q -> Front == q -> Rear){
        cout << "Queue is Empty!" << endl;
    }
    else{
        q -> Front++;
        x = q -> Q[q -> Front];
    }
    return x;
}

void Display(Queue q){
    for(int i = q.Front + 1; i <= q.Rear; i++){
        cout << q.Q[i] << " ";
    }
    cout << endl;
}

int main(){
    Queue q;
    cout << "Enter the size of Queue: ";
    cin >> q.size;
    q.Front = q.Rear = -1;
    q.Q = new int[q.size];

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);
    Display(q);

    cout << "Deleted " << dequque(&q) << endl;
    cout << "Deleted " << dequque(&q) << endl;
    cout << "Deleted " << dequque(&q) << endl;

    Display(q);
    return 0;
}