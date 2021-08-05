#include <iostream>
#include <queue>
#include <vector>

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

pair<int, int> heightDiameter(node *root)
{
    if (root == NULL)
    {
        return make_pair(0, 0);
    }
    else
    {
        pair<int, int> LeftPart = heightDiameter(root->left);
        pair<int, int> RightPart = heightDiameter(root->right);

        return make_pair(1 + max(LeftPart.first, RightPart.first), max(1 + LeftPart.first + RightPart.first, max(LeftPart.second, RightPart.second)));
    }
}

// int diameter(node* root){
//     //Calculate left height and right height for each node add one to get the max diameter passing though that node, add one to that and return it.
//     //but also maximize this for all nodes
//     //O(n ^2)

//     //using iterative level order to avoid recursion
//     //lol lets do recursion
//     //we'll calc diameter for the current root then call the function for the left and righ tsubtree and then return the maximum between these three

//     int diameterNode = 1 + height(root->left) + height(root->right);

//     int diameterLeft = diameter(root->left);
//     int diameterRight = diameter(root->right);

//     return max(diameterNode, max(diameterRight, diameterLeft));

// }

int main()
{

    node *root = new node(20);
    root->left = new node(1);
    root->right = new node(1);
    root->left->left = new node(10);
    root->left->left->left = new node(10);
    root->left->left->left->left = new node(10);
    root->left->left->right = new node(10);
    root->left->right = new node(10);
    root->left->right->right = new node(10);
    root->left->right->right->right = new node(10);
    



    pair<int, int> finPair = heightDiameter(root);

    cout<<"Height: "<<finPair.first<<"\t"<<"Diameter: "<<finPair.second<<endl;
}