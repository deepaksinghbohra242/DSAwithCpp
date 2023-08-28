// find the frequency of a given number

#include <bits/stdc++.h>
using namespace std;

int lsearch(int arr[], int n, int x){
    int high = n-1;
    int low = 0;
    int res = 0;
    while (low <=high) {                        
        int mid = low +(high-low)/2;            

        if(arr[mid]==x){
            while(arr[mid]==x){                 
                mid--;
            }
            res = mid+1;
            return res;
        }
        else if(arr[mid]<x){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return res;
}

int hsearch(int arr[], int n, int x){
    int high = n-1;
    int low = 0;
    int res = 0;
    while (low <=high) {
        int mid = low +(high-low)/2;

        if(arr[mid]==x){
            while(arr[mid]==x){
                mid++;
            }
            res = mid;
            return res;
        }
        else if(arr[mid]<x){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return res;
}

int frequentCount(int arr[], int n, int x){
    int lbound = lsearch(arr,n,x);
    int hbound = hsearch(arr,n,x);
    return hbound - lbound;
}

int main()
{
    int arr[] ={1,2,2,2,2,3,3,3};
    int x = 2;
    int n = sizeof(arr)/sizeof(int);
    cout<<frequentCount(arr,n,x);
    return 0;
}

O(logn)