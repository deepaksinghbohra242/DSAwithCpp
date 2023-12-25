// Maximum and minimum of an array
// Approaches
// 1. Using sorting
// 2. Linear search

#include <bits/stdc++.h>
using namespace std;

struct Pair{
    int min;
    int max;
};

void printArray(int arr[] , int n){
    for (int i = 0 ;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

Pair getMinMax(int arr[] ,int n){
    struct Pair minmax;

    if(n==1){
        minmax.min = arr[0];
        minmax.max= arr[0];
        return minmax;
    }

    if(arr[0]>arr[1]){
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else{
        minmax.max = arr[1];
        minmax.min = arr[0];
    }

    for(int i=2;i<n;i++){
        if(arr[i]>minmax.max){
            minmax.max = arr[i];
        }
        else if(arr[i]<minmax.min){
            minmax.min = arr[i];
        }
    }
    return minmax;
}

int main()
{
    int arr[] = {1000, 11, 445, 1, 330, 3000};   
    int n = sizeof(arr) / sizeof(arr[0]); 
    printArray(arr,n);
    struct Pair minmax = getMinMax(arr, n);
    cout << "Minimum element is: "<<minmax.min<<"\tMaximum Element is :"<<minmax.max<< endl;
    return 0;
}