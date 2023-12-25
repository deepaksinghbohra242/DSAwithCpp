// cyclic rotate  the array by  one

#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> & arr , int n){
    for (int i = 0 ;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void cyclicRotate(vector<int>& arr,int n){
    int temp = arr[n-1];
    for(int i=n-1;i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[0] = temp;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6};
    int n = arr.size();
    cyclicRotate(arr,n);
    printArray(arr,n);
    return 0;
}