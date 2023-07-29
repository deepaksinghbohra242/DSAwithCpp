#include <bits/stdc++.h>
using namespace std;

int join_ropes(int ropes[],int n){
    priority_queue<int,vector<int>,greater<int>> pq(ropes,ropes+n);

    int cost = 0;

    while(pq.size()>1){
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        int new_ropes = a+b;
        cost+=new_ropes;
        pq.push(new_ropes);
    }
    return cost;
}

int main()
{
    int ropes[] = {4, 3, 2, 6};
	int n = 4;

	cout << join_ropes(ropes, n) << endl;
    return 0;
}