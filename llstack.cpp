#include <iostream>
#include <climits>

using namespace std;

// all are constant order

struct node
{
    int data;
    node *next = NULL;

    node(int n)
    {
        data = n;
        next = NULL;
    }
};

struct stack
{
    node *head;
    int size;

    stack()
    {
        head = NULL;
        size = 0;
    }

    void push(int n)
    {
        node *temp = new node(n);
        temp->data = n;
        temp->next = head;
        head = temp;
        size++;
    }

    int pop()
    {
        if (head == NULL)
        {
            return INT_MIN;
        }

        int tempVal = head->data;
        node *temp = head;
        head = head->next;
        delete (temp);
        size--;
        return tempVal;
    }

    bool isEmpty()
    {
        return (head == NULL);
    }

    int sizeStack()
    {
        return size;
    }

    int top()
    {
        return head->data;
    }
};

int main()
{
    stack st;

    cout << st.pop() << endl;
    cout << st.isEmpty() << endl;

    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.isEmpty() << endl;
    cout << st.pop() << endl;
    cout << st.pop() << endl;
    cout << st.top() << endl;

    switch (expression)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
}