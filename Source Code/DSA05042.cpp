#include<bits/stdc++.h>

using namespace std;
#define ll long long

void solve(){
    ll n, k; cin>>n>>k;
    vector<ll> arr(n);
    bool zero = false;
    for(ll &val: arr) {
        cin>>val;
        if(val == 0) zero = true;
    }

    if(k == 0 && zero){
        cout<<"YES"<<endl;
        return;
    } else if(k == 0 && !zero){
        cout<<"NO"<<endl;
        return;
    }

    ll sum = 0, pos = 0;
    bool check = false;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        while(sum > k) sum -= arr[pos++];
        if(sum == k){
            check = true;
            break;
        }
    }

    cout<<(check? "YES" : "NO")<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}