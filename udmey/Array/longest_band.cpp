#include <bits/stdc++.h>
using namespace std;
// Function to find the length of longest increasing subsequence in a given array.
int largestBand(vector<int>& arr){
    int n = arr.size();
    unordered_set<int> s;

    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int largest = 1;
    for(auto element : s){
        int parent = element-1;
        if(s.find(parent)==s.end()){
            int nextEle = element+1;
            int cnt = 1;
            while(s.find(nextEle) != s.end()){
                nextEle++;
                cnt++;
            }
            largest = max(largest,cnt);
        }
    }
    return largest;
}
int main()
{   
    vector<int> arr{1, 9, 3, 0, 18, 5, 2, 10, 7, 12, 6,4 ,8};
	cout << largestBand(arr)<<endl;

    return 0;
} 