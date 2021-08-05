#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;

    node(int c)
    {
        data = c;
        next = NULL;
        prev = NULL;
    }
};

struct deque
{
    int size;
    node *front;
    node *back;

    deque()
    {
        size = 0;
        front = NULL;
        back = NULL;
    }

    void insertFront(int c)
    {
        node *temp = new node(c);
        if (size == 0)
        {
            front = temp;
            back = temp;
            size++;
            return;
        }
        else
        {
            front->prev = temp;
            temp->next = front;
            front = temp;
            size++;
            return;
        }
    }

    void insertBack(int c)
    {
        node *temp = new node(c);
        if (size == 0)
        {
            front = temp;
            back = temp;
            size++;
            return;
        }
        else
        {
            back->next = temp;
            temp->prev = back;
            back = temp;
            size++;
        }
    }

    int deleteFront()
    {
        node *temp = front;
        int tempInt = front->data;
        if (size == 0)
        {
            cout << "Empty";
            return -1;
        }
        else if (front == back)
        {
            front = NULL;
            back = NULL;
            delete (temp);
            size--;
            return tempInt;
        }
        else
        {
            front = front->next;
            front->prev = NULL;
            delete (temp);
            size--;
            return tempInt;
        }
    }

    int deleteBack()
    {
        node *temp = back;
        int tempInt = back->data;
        if (size == 0)
        {
            cout << "Empty";
            return -1;
        }
        else if (front == back)
        {
            front = NULL;
            back = NULL;
            delete (temp);
            size--;
            return tempInt;
        }
        else
        {
            back = back->prev;
            back->next = NULL;
            delete (temp);
            size--;
            return tempInt;
        }
    }

    int getFront()
    {
        if (size > 0)
        {
            return front->data;
        }
        else
        {
            cout << "Empty";
            return -1;
        }
    }

    int getBack()
    {
        if (size > 0)
        {
            return back->data;
        }
        else
        {
            cout << "Empty";
            return -1;
        }
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }
};

int main()
{
    deque de;
    de.insertBack(10);

    de.insertFront(20);

    de.insertFront(30);

    de.insertBack(40);

    cout<<de.deleteBack()<<endl;

    cout<<de.deleteFront()<<endl;
}