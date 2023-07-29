#include <bits/stdc++.h>
using namespace std;

int wines(int dp[][10],int prices[],int l,int r, int y){
    if (l > r){
        return 0;
    }
    if(dp[l][r]!=0){
        return dp[l][r];
    }
    int pick_left = y*prices[l] + wines(dp,prices,l+1,r,y+1);
    int pick_right = y*prices[r] + wines(dp,prices,l,r-1,y+1);

    return dp[l][r] = max(pick_left,pick_right);
}

int main()
{
    int a[] = {2,3,5,1,4};
    int n = 5;
    int dp[10][10] = {0};

    cout<<wines(dp,a,0,n-1,1)<<endl;
    return 0;
}