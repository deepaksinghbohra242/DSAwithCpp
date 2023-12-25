// maximum depth of binary tree ;
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left, *right;
};
node* newNode(int data){
    node* Node  = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
    return Node;
}
int maxHeigth(node* root){
    if(root == NULL){
        return 0;
    }
    else {
        int lDepth = maxHeigth(root->left);
        int rDepth = maxHeigth(root->right);

        return max(lDepth,rDepth) +1;
    }
}

int main()
{
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "max height of tree is " <<maxHeigth(root);
    return 0;
}