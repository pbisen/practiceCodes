#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *newNode = new node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *temp = head;

    node *newNode = new node(val);

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void displayList(node *head)
{
    node *temp = head;

    cout << "NULL <=> ";

    while (temp != NULL)
    {
        cout << temp->data << " <=> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

void deleteAtHead(node *&head)
{
    node *todelete = head;

    head = head->next;
    head->prev = NULL;

    delete todelete;
}

void deleteNode(node *&head, int val)
{
    if (head->data == val)
    {
        deleteAtHead(head);
        return;
    }

    node *todelete = head;

    while (todelete->data != val)
    {
        todelete = todelete->next;
    }
    if (todelete->next != NULL)
    {
        todelete->next->prev = todelete->prev;
    }

    todelete->prev->next = todelete->next;

    delete todelete;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    displayList(head);
    deleteNode(head, 1);
    displayList(head);
}