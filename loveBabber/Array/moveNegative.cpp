// Move negative to one side

#include <bits/stdc++.h>
using namespace std;
void printArray(vector<int> & arr , int n){
    for (int i = 0 ;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void moveNegative(vector<int>& arr, int n){
    int low = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[low],arr[i]);
            low++;
        }
    }
}
int main()
{
    vector<int> arr = {1,4,5,3,-1,3,-2};
    int n = arr.size();
    moveNegative(arr, n);
    printArray(arr,n);

    return 0;
}