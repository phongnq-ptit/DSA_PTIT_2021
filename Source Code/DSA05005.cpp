#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    ll n; cin>>n;
    vector<ll> arr(n);
    vector<ll> dp(n, 1);
    for(auto &x: arr) cin>>x;

    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(arr[i] >= arr[j]) 
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }

    sort(dp.begin(), dp.end());
    cout<<arr.size() - dp[n - 1]<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}