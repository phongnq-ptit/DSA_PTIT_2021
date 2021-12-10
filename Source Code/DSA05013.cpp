#include<bits/stdc++.h>

using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;

void solve(){
    ll n, k; cin>>n>>k;
    ll dp[100005] = {0};
    dp[0] = dp[1] = 1;
    for(ll i = 2; i <= n; i++){
        for(ll j = 1; j <= min(i, k); j++){
            dp[i] += dp[i - j];
            dp[i] %= MOD;
        }
    }

    cout<<dp[n]<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}