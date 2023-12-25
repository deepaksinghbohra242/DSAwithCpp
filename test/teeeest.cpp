#include <bits/stdc++.h>
using namespace std;

int rev(int a){
        int ans=0;
        while(a!=0){
            ans += ans*10 + (a%10);
            a = a/10;
        }
        return ans;
    }
int main()
{
    vector<int> nums = {42,11,1,97};

    cout<< rev(nums[0]);
    
    return 0;
}