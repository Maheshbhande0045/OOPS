#include <iostream>
using namespace std;
#define Size 5

int Queue[Size];
int rear = -1, front = -1;
void enqueue(int value)
{
    if (rear == Size - 1)
    {
        cout << "queue is full" << endl;
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    Queue[++rear] = value;
    cout << value << "Enqueue" << endl;
}
void dequeue(){
    if (front==-1||front>rear)
    {
        cout<<"queue is Empty"<<endl;
        return;
    }
    else
    {
        cout<<"Dequeue"<<Queue[front++]<<endl;
    }
    
}
void display()
{
    if (front == -1)
    {
        cout << "queue is empty" << endl;
        return;
    }
    for (int i = front; i <= rear; i++)
    {
        cout << Queue[i] << " ";
    }
    cout << endl;
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
}