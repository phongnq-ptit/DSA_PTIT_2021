#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    ll n; cin>>n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];

    ll res = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(abs(res) > abs(arr[i] + arr[j]) && i != j)
                res = arr[i] + arr[j];
        }
    }

    cout<<res<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}