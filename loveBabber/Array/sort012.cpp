// sort 0,1,2 without using sort method

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[] , int n){
    for (int i = 0 ;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort012(int arr[], int n){
    int high =n-1;
    int low =0;
    int mid = 0;
    while(mid<=high){
        switch(arr[mid]){
            case 0 : swap(arr[low++],arr[mid++]);
            break;
            case 1 : mid++;
            break;
            case 2 : swap(arr[mid], arr[high--]);
            break;
        }
    }
}

int main()
{
    int arr[] ={1,0,2,2,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort012(arr,n);
    printArray(arr,n);
    return 0;
}