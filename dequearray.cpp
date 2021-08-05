#include <iostream>

using namespace std;

struct deque
{
    int cap;
    int *array;
    int size;
    int front;
    int back;

    deque(int n)
    {
        cap = n;
        array = new int[n];
        size = 0;
        front = -1;
        back = -1;
    }

    void insertFront(int input)
    {
        if (size >= cap)
        {
            cout << "Full" << endl;
        }
        if (size == 0)
        {
            array[0] = input;
            front = 0;
            back = 0;
            size++;
            return;
        }
        else
        {
            front = (front - 1 ) % cap;
            array[front] = input;
            size++;
            return;
        }
    }

    void insertBack(int input)
    {
        if (size >= cap)
        {
            cout << "Full" << endl;
        }
        if (size == 0)
        {
            array[0] = input;
            front = 0;
            back = 0;
            size++;
            return;
        }
        else
        {
            back = (back + 1) % cap;
            array[back] = input;
            size++;
            return;
        }
    }

    int deleteFront()
    {
        if (size == 0)
        {
            cout << "Empty";
            return -1;
        }
        int temp = array[front];
        array[front] = 0;
        front = (front + 1) % cap;
        size--;
        return front;
    }

    int deleteBack()
    {
        if (size == 0)
        {
            cout << "Empty";
            return -1;
        }
        int temp = array[back];
        array[back] = 0;
        back = (back - 1 ) % cap;
        size--;
        return back;
    }

    int getBack()
    {
        return array[back];
    }

    int getFront(){
        return array[front];
    }

    int getSize(){
        return size;
    }
};

void printArray(int* array, int n){
    for(int i = 0; i < n; i++){
        cout<<array[i]<<"\t";
    }

    cout<<endl;
}


int main(){
    deque de(5);

    de.insertBack(10);
    printArray(de.array, de.cap);
    de.insertFront(20);
    printArray(de.array, de.cap);
    de.insertFront(30);
    printArray(de.array, de.cap);
    de.insertBack(40);
    printArray(de.array, de.cap);
    de.deleteBack();
    printArray(de.array, de.cap);
    de.deleteFront();
    printArray(de.array, de.cap);

}