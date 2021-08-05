#include <iostream>

using namespace std;

class node
{
public:
    int value;
    node *next;

    node(int val)
    {
        value = val;
        next = NULL;
    }
};

void insertHead(node *&head, int data)
{
    node *ntemp = new node(data);
    ntemp->next = head;
    head = ntemp;
}

void insertTail(node *&head, int data)
{
    node *n = new node(data);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

void displayList(node *head)
{

    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

bool linearSearchLL(node *head, int val)
{
    node *temp = head;

    while (temp->next != NULL)
    {
        if (temp->value == val)
        {
            return true;
        }

        temp = temp->next;
    }

    return false;
}

void deleteNode(node *&head, int val)
{

    //empty list
    if (head == NULL)
    {
        return;
    }

    //only head present
    else if (head->next == NULL)
    {
        if (head->value == val)
        {
            delete head;
            head = NULL;
        }

        return;
    }

    //when number of elements >=2

    node *temp = head;

    while (temp->next->value != val)
    {
        temp = temp->next;
    }

    node *todelete = temp->next;

    temp->next = temp->next->next;

    delete todelete;

    return;
}

node *reverseLL(node *&head)
{
    node *prev = NULL;
    node *current = head;
    node *next;

    while (current != NULL)
    {
        next = current->next;

        current->next = prev;

        prev = current;
        current = next;
    }

    return prev;
}

node *reverseRecursiveLL(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newHead = reverseRecursiveLL(head->next);

    head->next->next = head;
    head->next = NULL;

    return newHead;
}

void createCycle(node *&head, int val)
{
    node *last = head;
    node *target = NULL;

    if (head == NULL)
    {
        return;
    }

    if (head->next == NULL)
    {
        if (head->value == val)
        {
            head->next = head;
            return;
        }
        else
        {
            return;
        }
    }

    if (head->value != val)
    {
        while (last->next != NULL)
        {
            last = last->next;

            if (last->value == val)
            {
                target = last;
            }
        }

        last->next = target;
    }
    else
    {
        while (last->next != NULL)
        {
            last = last->next;
        }

        last->next = head;
    }
}

bool detectCycle(node *head)
{
    node *fastptr = head;
    node *slowptr = head;

    while (fastptr->next != NULL && fastptr->next->next != NULL && slowptr->next != NULL)
    {
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;

        if (fastptr == slowptr)
        {
            return true;
        }
    }

    return false;
}

void deleteCycle(node *head)
{
    node *fastptr = head;
    node *slowptr = head;

    do
    {
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;

    } while (fastptr != slowptr);

    fastptr = head;

    if (slowptr == fastptr)
    {
        while (slowptr->next != fastptr)
        {
            slowptr = slowptr->next;
        }

        slowptr->next = NULL;
        return;
    }

    while (fastptr->next != slowptr->next)
    {
        fastptr = fastptr->next;
        slowptr = slowptr->next;
    }

    slowptr->next = NULL;

    return;
}

int sizeLL(node *head)
{
    int count = 0;
    node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;

        count++;
    }

    return count;
}

void kappend(node *&head, int k)
{

    int n = sizeLL(head);
    cout << n << endl;

    node *oldHead = head;
    node *oldTail = head;
    node *newHead;
    node *newTail;

    int count = 1;

    while (oldTail->next != NULL)
    {
        if (count == n - k)
        {
            newTail = oldTail;
        }

        if (count == n - k + 1)
        {
            newHead = oldTail;
        }

        count++;
        oldTail = oldTail->next;
    }

    newTail->next = NULL;
    head = newHead;
    oldTail->next = oldHead;
}

void intersect(node *head1, node *head2, int posn)
{
    node *list1 = head1;
    posn--;
    while (posn)
    {
        list1 = list1->next;
        posn--;
    }

    node *list2 = head2;
    while (list2->next != NULL)
    {
        list2 = list2->next;
    }

    list2->next = list1;
}

int intersectionPoint(node *head1, node *head2)
{
    int size1 = sizeLL(head1);
    int size2 = sizeLL(head2);

    cout << size1 << '\t' << size2 << endl;

    node *ptr1;
    node *ptr2;

    int diff = 0;

    if (size1 > size2)
    {
        diff = size1 - size2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        diff = size2 - size1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while (diff)
    {
        ptr1 = ptr1->next;
        diff--;
    }

    cout << ptr1->value << endl;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;

        if (ptr1 == ptr2)
        {
            return ptr1->value;
        }
    }

    return -1;
}

node *mergeSortedRe(node *head1, node *head2)
{

    node *temp;

    if (head1 == NULL)
    {
        return head2;
    }

    if (head2 == NULL)
    {
        return head1;
    }

    if (head1->value < head2->value)
    {
        temp = head1;
        head1 = head1->next;
    }
    else
    {
        temp = head2;
        head2 = head2->next;
    }

    temp->next = mergeSortedRe(head1, head2);

    return temp;
}

node *mergeSorted(node *head1, node *head2)
{
    node *dummy = new node(-1);
    node *temp = dummy;
    node *ptr1 = head1;
    node *ptr2 = head2;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->value < ptr2->value)
        {

            temp->next = ptr1;
            ptr1 = ptr1->next;
            temp = temp->next;
        }
        else
        {
            temp->next = ptr2;
            ptr2 = ptr2->next;
            temp = temp->next;
        }
    }

    while (ptr1 != NULL)
    {
        temp->next = ptr1;
        ptr1 = ptr1->next;
        temp = temp->next;
    }

    while (ptr2 != NULL)
    {
        temp->next = ptr2;
        ptr2 = ptr2->next;
        temp = temp->next;
    }

    return dummy->next;
}

void oddThenEven(node *head)
{
    node *odd = head;
    node *even = head->next;
    node *evenStart = even;

    while (odd->next != NULL && even->next != NULL)
    {

        odd->next = even->next;
        odd = odd->next;

        if (odd->next == NULL)
        {
            break;
        }

        even->next = odd->next;
        even = even->next;
    }

    even->next = NULL;
    odd->next = evenStart;
}

int main()
{

    node *head1 = NULL;
    node *head2 = NULL;
    node *headMerge = NULL;

    insertHead(head1, 1);
    insertTail(head1, 2);
    insertTail(head1, 3);
    insertTail(head1, 4);
    insertTail(head1, 5);

    displayList(head1);

    oddThenEven(head1);

    displayList(head1);
}

