#include <bits/stdc++.h>
using namespace std;
int trappedWater(vector<int>& water){
    int n=water.size();
    if(n<=2){
        return 0;
    }
    vector<int>left(n,0) , right(n,0);
    left[0] = water[0];
    right[n-1]=water[n-1];
    for(int i=1;i<n;i++){
        left[i] = max(left[i-1],water[i]);
        right[n-i-1] = max(right[n-i],water[n-i-1]);
    }
    int store = 0;
    for(int i=0;i<n;i++){
        store += min(left[i],right[i]) - water[i];
    }
    return store;
}
int main()
{
    vector<int> water = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trappedWater(water)<<endl;
    return 0;
} 