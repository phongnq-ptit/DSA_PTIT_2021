#include<bits/stdc++.h>

using namespace std;

vector<int> process(vector<int> arr, bool check){
    if(check) reverse(arr.begin(), arr.end());

    vector<int> dp(arr.size(), 1);
    for(int i = 1; i < arr.size(); i++)
        if(arr[i - 1] < arr[i]) 
            dp[i] = dp[i - 1] + 1;

    return dp;
}

void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int &val: arr) cin>>val;

    vector<int> left = process(arr, false);
    vector<int> right = process(arr, true); reverse(right.begin(), right.end());

    int res = INT_MIN;
    for(int i = 0; i < n; i++)
        res = max(res, left[i] + right[i] - 1);
    
    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}