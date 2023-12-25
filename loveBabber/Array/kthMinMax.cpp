// 1. sort and then select 
// 2. using min and max heap
// 3. Quick select method

#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int n , int k){
    sort (arr, arr+n);
    return arr[k-1];
}
int kthLargest(int arr[], int n , int k){
    sort(arr,arr+n);
    return arr[n-k];
}
int main()
{
    int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]), k = 2;

    cout<<"kth smallest element "<<kthSmallest(arr,n,k)<<endl;
    cout<< "Kth largest element "<<kthLargest(arr,n,k);


    return 0;
}