#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;

    node(int c)
    {
        data = c;
        next = NULL;
    }
};

struct queue
{
    int size;
    node *head;
    node *tail;

    queue()
    {
        size = 0;
        head = NULL;
        tail = NULL;
    }

    void enque(int c)
    {
        node *temp = new node(c);
        if (head == NULL && tail == NULL)
        {
            head = temp;
            tail = temp;
            size++;
            return;
        }
        else
        {
            tail->next = temp;
            tail = temp;
            size++;
            return;
        }
    }

    int deque()
    {
        if (head == NULL)
        {
            cout << "EmptyQueue" << endl;
            return -1;
        }

        else
        {
            node *temp = head;
            head = head->next;
            if (head == NULL)
            {
                tail = NULL;
            }
            int dataTemp = temp->data;

            delete (temp);
            size--;
            return dataTemp;
        }
    }

    int getSize()
    {
        return size;
    }

    int getFront()
    {
        if (head == NULL)
        {
            cout << "emptyfam" << endl;
            return -1;
        }
        else
        {
            return head->data;
        }
    }

    int getBack()
    {
        if (tail == NULL)
        {
            cout << "emptyfam" << endl;
            return -1;
        }
        else
        {
            return tail->data;
        }
    }

    bool isEmpty()
    {
        if (head == NULL && tail == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    queue qe;

    cout << qe.isEmpty() << endl;
    qe.enque(1);
    cout << qe.isEmpty() << endl;
    qe.enque(2);
    qe.enque(3);
    qe.enque(4);
    cout << qe.deque() << endl;
    cout << qe.deque() << endl;
    cout << qe.getFront() << endl;
    cout << qe.getBack() << endl;
    cout << qe.getSize() << endl;
    cout << qe.deque() << endl;
    cout << qe.deque() << endl;
    cout << qe.isEmpty() << endl;
}