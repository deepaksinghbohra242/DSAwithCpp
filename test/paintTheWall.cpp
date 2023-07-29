#include <bits/stdc++.h>
using namespace std;

long paintThewall(int arr[], int n){
    long res = n;
    for (int i=0;i<n;i++){
        res += arr[i];
    }
    return res;
}
int main()
{
    int arr[] = {1,0,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    long res = paintThewall(arr,n);
    cout<<res;
    return 0;
} 