// implemetation f binary tree 
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
//preorder
void preOrder(Node * node){
    if(node == NULL)return;
    cout<<node->data<<" ";
    preOrder(node->left);
    preOrder(node->right);
}
void postOrder(Node * node){
    if(node==NULL)return;
    postOrder(node->left);
    postOrder(node->right);
    cout<<node->data<<" ";
}
void inOrder(Node * node){
    if(node==NULL)return;
    inOrder(node->left);
    cout<<node->data<<" ";
    inOrder(node->right);
}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // preOrder(root);
    // 1245367
    // postOrder(root);
    // 4526731
    // inOrder(root);
    // 4251637
    return 0;
}