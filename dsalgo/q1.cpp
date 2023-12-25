#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1,2,3,4,5,6,7};
    int j =  arr.size()-1;
    int i = 0;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i=0 ;i<arr.size();i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}