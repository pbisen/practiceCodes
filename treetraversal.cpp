#include<iostream>
#include<queue>
#include<stack>

using namespace std;

struct node{
    int key;
    node* left; 
    node* right; 

    node(int k){
        key = k;
        left = NULL;
        right = NULL;
    }


};

void inOrder(node* root){
    if(root != NULL){
        inOrder(root->left);
        cout<<root->key<<" ";
        inOrder(root->right);
    }
}

void preOrder(node* root){
    if(root !=NULL){
        cout<<root->key<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(node* root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->key<<" ";
    }
}

int heightTree(node* root){
    if(root == NULL){
        return 0;

    }
    else{
        return max(heightTree(root->left), heightTree(root->right)) + 1;
    }
}

void kdistance(node* root, int current, int target){
    if(root == NULL){
        return;
    }
    else if(current == target){
        cout<<root->key<<" ";
        return;
    }
    else{
        kdistance(root->left, current+1, target);
        kdistance(root->right, current + 1, target);
    }
}

// void levelorder(node* root){
//     if(root == NULL){
//         cout<<"Empty Tree"<<endl;
//     }
//     queue<node*> qu;
//     qu.push(root);

//     while(qu.empty() == false){
//         node* current = qu.front();
//         cout<<current->key<<" ";
//         qu.pop();
//         if(current->left != NULL){
//             qu.push(current->left);
//         }
//         if(current->right != NULL){
//             qu.push(current->right);
//         }

//     }
// }

void levelorder(node* root){
    if(root == NULL){
        cout<<"Empty Tree"<<endl;
    }
    queue<node*> qu;
    qu.push(root);

    while(qu.empty() == false){
        node* current = qu.front();
        cout<<current->key<<" ";
        
        if(current->left != NULL){
            qu.push(current->left);
            continue;
        }
        qu.pop();
        if(current->right != NULL){
            qu.push(current->right);
        }

    }
}


int sizeTree(node* root){
    if(root == NULL){
        return 0;
    }
    else{
        return sizeTree(root->right) + sizeTree(root->left) + 1;
    }
}

int treeMax(node* root){
    if(root == NULL){
        return 0;
    }
    else{
        return max(max(treeMax(root->left), treeMax(root->right)), root->key);
    }
}

void iterativeInorder(node* root){
    if(root == NULL){
        cout<<"Empty Tree"<<endl;
    }

    stack<node*> st;

    node* curr = root;

    while(curr != NULL || st.empty() == false){
        while(curr != NULL){
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout<<curr->key<<" ";
        curr = curr->right;
    }

}

int main(){
    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);

    cout<<"PreOrder: ";
    preOrder(root);
    cout<<endl;
    cout<<"InOrder: ";
    inOrder(root);
    cout<<endl;
    cout<<"PostOrder: ";
    postOrder(root);
    cout<<endl;

    cout<<"Height: "<<heightTree(root)<<endl;
    cout<<"Elements at Distance 0: ";
    kdistance(root, 0, 0);
    cout<<endl;
    cout<<"Elements at Distance 1: ";
    kdistance(root, 0, 1);
    cout<<endl;
    cout<<"Elements at Distance 2: ";
    kdistance(root, 0, 2);
    cout<<endl;
    cout<<"Level Order Traversal: ";
    //levelorder(root);
    cout<<endl;
    cout<<"Size: "<<sizeTree(root)<<endl;
    cout<<"Max: "<<treeMax(root)<<endl;
    cout<<"Inorder ( Iterative ) : ";
    iterativeInorder(root);
    cout<<endl;
}