#include <iostream>

using namespace std;

struct queue
{
    int size, cap, front;
    int *array;

    queue(int c)
    {
        cap = c;
        size = 0;
        front = 0;
        array = new int[cap];
    }

    void enque(int input)
    {
        if (size < cap)
        {   
            array[(front + size)%cap] = input;
            size++;
            
        }
        else
        {
            cout << "Error:QueueFull" << endl;
            cout << "UnreliableOutputFollows" << endl;
        }
    }

    int deque()
    {
        if (size > 0)
        {
            int temp = array[front];
            front = (front + 1 )% cap;
            size--;
            return temp;
        }
        else{
            cout<<"Error:EmptyQueue"<<endl;
            return -1;
        }
    }

    int getFront()
    {
        if (size == 0)
        {
            return -1;
        }
        return array[front];
    }

    int getBack()
    {
        if (size == 0)
        {
            return -1;
        }
        return array[front+size-1];
    }

    bool isFull()
    {
        return size == cap - 1;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    int sizeQueue(){
        return size;
    }
};

int main(){
    queue qu(5);

    cout<<qu.isEmpty()<<endl;
    cout<<qu.isFull()<<endl;

    qu.enque(1);
    qu.enque(2);
    qu.enque(3);
    qu.enque(4);
    qu.enque(5);
    cout<<qu.isEmpty()<<endl;
    cout<<qu.isFull()<<endl;
    cout<<qu.deque()<<endl;
    cout<<qu.deque()<<endl;
        qu.enque(6);
    qu.enque(7);
    cout<<qu.getFront()<<endl;
    cout<<qu.getBack()<<endl;
    cout<<qu.sizeQueue()<<endl;

}