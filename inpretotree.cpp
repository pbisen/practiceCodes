#include <iostream>
#include <queue>
#include <vector>
#include<algorithm>
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

int PREIN = 0;

node *toTree(int pre[], int in[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }

    node *root = new node(pre[PREIN++]);
    int index = start;
    for (int i = start; i <= end; i++)
    {
        if (root->key == in[i])
        {
            index = i;
            break;
        }
    }

    root->left = toTree(pre, in, start, index - 1);
    root->right = toTree(pre, in, index + 1, end);

    return root;
}

void levelOrderLL(node *root)
{
    queue<node *> qu;
    qu.push(root);

    int level = 0;

    while (qu.empty() != true)
    {
        int levelCount = qu.size();
        vector<int> levelData;

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
            levelData.push_back(qu.front()->key);
            qu.pop();
        }

        if(level % 2 == 1){
            reverse(levelData.begin(), levelData.end());
        }

        for(int i = 0; i < levelData.size(); i++){
            cout<<levelData[i]<<" ";
        }

        cout << '\n';
        level++;
    }
}

int main()
{
    int inorder[5] = {20, 10, 40, 30, 50};
    int preorder[5] = {10, 20, 30, 40, 50};

    node *root = toTree(preorder, inorder, 0, 4);

    levelOrderLL(root);
}