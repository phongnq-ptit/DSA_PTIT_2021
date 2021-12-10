#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<ll> init(vector<ll> arr, ll n){
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    return arr;
}

void solve(){
    ll n; cin>>n;
    vector<ll> a(n); a = init(a, n);
    vector<ll> b(n); b = init(b, n);

    ll res = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<ll>());

    for(int i = 0; i < n; i++)
        res += a[i]*b[i];

    cout<<res<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}