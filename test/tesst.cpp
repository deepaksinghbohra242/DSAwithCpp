#include <bits/stdc++.h>
using namespace std;

void frequentCount(int arr[] , int n , int x){
    int first = -1;
    int last = -1;

    for(int k =0;k<n;k++){
        if(x!=arr[k]){          //k=6
            continue;
        }
        if(first == -1){        //first=1
            first=k;           //first=1
        }
        last=k;                 //last=5
    }
    cout<<first<<" "<<last;
}

int main()
{   
    int arr[] ={1,2,2,2,2,2,3,3,3};
    int x = 2;
    int n = sizeof(arr)/sizeof(int);
    frequentCount(arr,n,x);
    return 0;
}

//O(n)
//space complexity = O(1);