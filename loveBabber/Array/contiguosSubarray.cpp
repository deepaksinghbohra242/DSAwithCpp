// Find the largest sum contiguos subarray

#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> & arr , int n){
    for (int i = 0 ;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void contiguosSubarray(vector<int>& arr, int n){
    int max = 0;
    int i =0;
    int j =0 ;
    int sum = 0;
    while(i<n){
        sum+=arr[i];
        if(sum>max){
            max = sum;
            i++;
        }
        else{
            sum-=arr[j];
            j++;
        }
    }
    // for(int k=j;k<=i;k++){
    //     cout<<arr[k]<<" ";
    // }
    cout<<max;
}

int main()
{
    vector<int> arr = {1,-2,3,4,5};
    int n = arr.size();
    contiguosSubarray(arr,n);
    return 0;
}