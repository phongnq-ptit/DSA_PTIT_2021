#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;

void solve(){
    ll n; cin>>n;
    vector<ll> arr(n);
    for(ll &x: arr) cin>>x;
    priority_queue<ll, vector<ll>, greater<ll>> pq (arr.begin(), arr.end());

    ll res = 0;
    while(pq.size() > 1){
        ll first = pq.top(); pq.pop();
        ll second = pq.top(); pq.pop();

        ll tmp = (first + second) % MOD;
        pq.push(tmp);
        res += tmp; res %= MOD;
    }

    cout<<res<<endl;
}

int main(){
    int a; cin>>a;
    while(a--) {
        solve();
    }
    return 0;
}