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

void preOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        cout << root->key << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->key << " ";
    }
}

int heightBinTree(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return (max(heightBinTree(root->left), heightBinTree(root->right)) + 1);
    }
}

void printAtlevelK(node *root, int k)
{
    if (root == NULL)
    {
        return;
    }

    if (k == 0)
    {
        cout << root->key << " ";
    }
    else
    {
        printAtlevelK(root->left, k - 1);
        printAtlevelK(root->right, k - 1);
    }
}

void levelOrderLL(node *root)
{
    queue<node *> qu;
    qu.push(root);

    while (qu.empty() != true)
    {
        int levelCount = qu.size();
        for (int i = 0; i < levelCount; i++)
        {
            if (qu.front()->left != NULL)
            {
                qu.push(qu.front()->left);
            }

            if (qu.front()->right != NULL)
            {
                qu.push(qu.front()->right);
            }
            cout << qu.front()->key << " ";
            qu.pop();
        }
        cout << endl;
    }
}

int sizeBinTree(node *root)
{
    queue<node *> qu;
    qu.push(root);
    int count = 0;

    while (qu.empty() != true)
    {
        if (qu.front()->left != NULL)
        {
            qu.push(qu.front()->left);
        }

        if (qu.front()->right != NULL)
        {
            qu.push(qu.front()->right);
        }

        qu.pop();
        count++;
    }

    return count;
}

int maxTree(node *root)
{
    queue<node *> qu;
    qu.push(root);
    int maxInt = INT_MIN;

    while (qu.empty() != true)
    {
        if (qu.front()->left != NULL)
        {
            qu.push(qu.front()->left);
        }

        if (qu.front()->right != NULL)
        {
            qu.push(qu.front()->right);
        }

        maxInt = max(maxInt, qu.front()->key);
        qu.pop();
    }

    return maxInt;
}

void printLeftView(node *root)
{
    //first nodes of level order traversal
    queue<node *> qu;
    qu.push(root);

    while (qu.empty() != true)
    {
        int levelCount = qu.size();

        for (int i = 0; i < levelCount; i++)
        {
            if (qu.front()->left != NULL)
            {
                qu.push(qu.front()->left);
            }

            if (qu.front()->right != NULL)
            {
                qu.push(qu.front()->right);
            }
            if (i == 0)
            {
                cout << qu.front()->key << " ";
            }

            qu.pop();
        }
    }
}

bool childrenSum(node *root)
{
    if (root == NULL)
    {
        return true;
    }
    else if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    else
    {
        int lVal = 0;
        int rVal = 0;

        if (root->left != NULL)
        {
            lVal = root->left->key;
        }
        if (root->right != NULL)
        {
            rVal = root->right->key;
        }

        return (root->key == lVal + rVal && childrenSum(root->left) && childrenSum(root->right));
    }
}

pair<bool, int> balancedTree(node *root)
{
    if (root == NULL)
    {
        return make_pair(true, 0);
    }

    pair<bool, int> lval = balancedTree(root->left);
    pair<bool, int> rval = balancedTree(root->right);

    if (lval.first && rval.first && abs(lval.second - rval.second) <= 1)
    {
        return make_pair(true, max(lval.second, rval.second) + 1);
    }
    else
    {
        return make_pair(false, max(lval.second, rval.second) + 1);
    }
}

int widthTree(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    deque<node *> qu;
    qu.push_back(root);

    int width = INT_MIN;

    while (qu.empty() != true)
    {
        int length = qu.size();

        int lVal = 0, rVal = 0;

        for(int i = 0; i < length; i++){
            if(qu[i] != NULL){
                lVal = i;
                break;
            }
        }

        for(int i = length-1; i >= 0; i--){
            if(qu[i] != NULL){
                rVal = i;
                break;
            }
        }

        width = max(width, rVal - lVal + 1);

        for (int i = 0; i < length; i++)
        {
            if (qu.front() != NULL)
            {
                if (qu.front()->left != NULL)
                {
                    qu.push_back(qu.front()->left);
                }
                else
                {
                    qu.push_back(NULL);
                }

                if (qu.front()->right != NULL)
                {
                    qu.push_back(qu.front()->right);
                }
                else
                {
                    qu.push_back(NULL);
                }
            }

            qu.pop_front();
        }
    }

    return width;
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

    cout << "Traversals" << endl;
    cout << "Inorder: ";
    inOrder(root);
    cout << endl;
    cout << "Preorder: ";
    preOrder(root);
    cout << endl;
    cout << "Postorder: ";
    postOrder(root);
    cout << endl;
    cout << endl;

    cout << "Height: " << heightBinTree(root) << endl;

    cout << endl;

    cout << "At Level 0: ";
    printAtlevelK(root, 0);
    cout << endl;
    cout << "At Level 1: ";
    printAtlevelK(root, 1);
    cout << endl;
    cout << "At Level 2: ";
    printAtlevelK(root, 2);
    cout << endl;
    cout << "At Level 3: ";
    printAtlevelK(root, 3);
    cout << endl;

    cout << "Level Order: " << endl;
    levelOrderLL(root);

    cout << "Size of Tree: " << sizeBinTree(root) << endl;
    cout << "Max of Tree: " << maxTree(root) << endl;

    cout << "Left View ";
    printLeftView(root);
    cout << endl;

    cout << "CSP: " << childrenSum(root) << endl;

    cout << "Height Balanced: " << balancedTree(root).first << endl;

    cout << "Width: " << widthTree(root) << endl;
}
