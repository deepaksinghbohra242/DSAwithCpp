// find union and intersection of a number

#include <bits/stdc++.h>
using namespace std;
void printArray(vector<int> & arr , int n){
    for (int i = 0 ;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void findUnionIntesection(vector<int>& arr1, vector<int>& arr2, int n, int m){
    vector<int> un;
    vector<int> in;
    int i=0;
    int j=0;
    while((i<n)&&(j<m)){
        if(arr2[j]<arr1[i]){
            un.push_back(arr2[j]);
            j++;
        }
        else if(arr1[i]<arr2[j]){
            un.push_back(arr1[i]);
            i++;
        }
        else {
            in.push_back(arr1[i]);
            i++;
        }
    }
    while ((i<n)){
        un.push_back(arr1[i++]);
    }
    while(j<m){
        un.push_back(arr2[j++]);
    }

    for(int i=0;i<un.size();i++){
        cout << " "<<un[i];
    }
    cout<<endl;
    for(int j=0;j<in.size();j++){
        cout <<" "<<in[j];
    }
}

int main()
{
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {2,2,3,3,6,7};
    int n = arr1.size();
    int m = arr2.size();
    findUnionIntesection(arr1,arr2,n,m);
    return 0;
}