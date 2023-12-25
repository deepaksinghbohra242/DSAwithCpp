// median of two sorted array 
// using merge sort

#include <bits/stdc++.h>
using namespace std;

// vector<int> mergeToArray(vector<int> arr1 , vector<int> arr2 , int m , int n){
//     int i = 0 ;
//     int j = 0;
//     vector<int> arr3;
//     while (i < m && j < n) {
//         if(arr1[i] < arr2[j]){
//             arr3.push_back(arr1[i]);
//             i++;
//         }else{
//             arr3.push_back(arr2[j]);
//             j++;
//         }
//     }
//     while(i<m){
//         arr3.push_back(arr1[i]);
//         i++;
//     }
//     while(j<n){
//         arr3.push_back(arr2[j]);
//         j++;
//     }
//     return arr3;
// }


int getMedian(vector<int> arr1 , vector<int> arr2 ,int m , int n){
    int i=0;
    int j=0;
    int m1=-1;
    int m2=-1;
    for(int cnt=0;cnt<=(m+n)/2;cnt++){
        m2=m1;
        if(i!=m && j!=n){
            m1 = (arr2[j]>arr1[i]) ? arr1[i++] : arr2[j++];
        }
        else if(i<m){
            m1 = arr1[i++];
        }
        else{
            m1 = arr2[j++];
        }
    }
    if ((m + n) % 2 == 1) {
        return m1;
    }
    else {
        return (m1 + m2) / 2;
    }
}

int main()
{
    vector<int>  arr1= {1,2,3,4,5,6};
    vector<int>  arr2={1,2,3,4};
    int m = arr1.size();
    int n = arr2.size();
    // vector<int> arr3 = mergeToArray(arr1 ,arr2 , m , n);
    // if((m+n)%2 == 0){
    //     cout<<(arr3[((m+n)/2)-1] + arr3[((m+n)/2)+1])/2;
    // }
    // else{
    //     cout<<arr3[(m+n)/2];
    // }

    int median = getMedian(arr1,arr2,m,n);
    cout<<median;
    return 0;
}