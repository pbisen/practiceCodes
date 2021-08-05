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

void inOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inOrder(root->left);
        cout << root->key << " ";
        inOrder(root->right);
    }
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

}
