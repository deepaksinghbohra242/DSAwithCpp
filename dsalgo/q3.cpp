// convert sorted array to binary search tree 
#include <bits/stdc++.h>
using namespace std;

class TNode{
    public:
        int data;
        TNode * left;
        TNode * right;
        TNode(int value) : data(value), left(nullptr), right(nullptr) {}
};  
TNode* newNode(int data){
    TNode* node = new TNode(data);
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void preOrder(TNode* node){
    if(node == NULL){
        return;
    }
    cout<<node->data<<" ";
    preOrder(node->left);
    preOrder(node->right);
}
TNode* sortToBST(int arr[] , int start , int end){
    if(start>end){
        return NULL;
    }
    int mid = start + (end-start)/2;
    TNode* node = new TNode(arr[mid]);
    node->left = sortToBST(arr,start,mid-1);
    node->right = sortToBST(arr,mid+1,end);
    return node;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    TNode* root = sortToBST(arr,0,n-1);
    cout<<"PreOrder transversal is ";
    preOrder(root);
    return 0;
}