#include <iostream>
#include <queue>
#include <limits.h>

using namespace std;

struct node
{
    int key;
    node *left;
    node *right;

    node(int k)
    {
        key = k;
        left = NULL;
        right = NULL;
    }
};

node* PREVIOUS = NULL;

node* inOrder(node *root)
{

    if (root == NULL)
    {
        return root;
    }

    node *head = inOrder(root->left);
    if (PREVIOUS == NULL)
    {
        head = root;
    }
    else
    {
        root->left = PREVIOUS;
        PREVIOUS->right = root;
    }
    PREVIOUS = root;
    inOrder(root->right);

    return head;
}

void printDLL(node *root)
{
    node *head = root;
    while (head != NULL)
    {
        cout << head->key << " ";
        head = head->right;
    }
    cout << '\n';
}

int main()
{
    node *root = new node(20);
    root->left = new node(8);
    root->right = new node(12);
    root->left->left = new node(3);
    root->left->right = new node(5);
    root->right->right = new node(12);
    root->right->right->right = new node(12);

    node *head = inOrder(root);
    printDLL(head);
}
