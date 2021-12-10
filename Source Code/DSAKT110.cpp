#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    ll n; cin>>n;
    vector<ll> arr(n);
    for(ll &val: arr) cin>>val;

    vector<ll> dp(n, 0);
    dp[0] = arr[0]; dp[1] = max(arr[0], arr[1]);
    for(ll i = 2; i < n; i++)
        dp[i] = max(dp[i - 2] + arr[i], dp[i - 1]);

    cout<<dp[n - 1]<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}