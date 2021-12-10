#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr(n), dp(n, 0);
    for(int &x: arr) cin>>x;

    dp[0] = arr[0]; dp[1] = max(arr[0], arr[1]);
    for(int i = 2; i < n; i++)
        dp[i] = max(dp[i - 2] + arr[i], dp[i - 1]);

    cout<<dp[n - 1]<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}