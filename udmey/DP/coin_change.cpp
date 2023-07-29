#include <bits/stdc++.h>
using namespace std;

int minNumberOfCoinChange(vector<int>& denoms ,int m){

    vector<int> dp(m+1,0);
    dp[0] = 0;

    for(int i=1;i<=m;i++){
        dp[i] = INT_MAX;

        for(int c : denoms){
            if(i-c >=0 && dp[i-c]!=INT_MAX){
                dp[i] = min(dp[i],dp[i-c]+1);
            }
        }
    }
    return dp[m]==INT_MAX ? -1 :dp[m];
}
int main()
{   
    vector<int> denoms = {1,5,7,10};
    int m =8;
    cout<<minNumberOfCoinChange(denoms,m);
    return 0;
}