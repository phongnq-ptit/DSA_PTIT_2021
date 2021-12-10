#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll sum(vector<ll> arr, int start){
    ll sum = 0;
    for(int i = start; i < arr.size(); i += 2) sum = sum * 10 + arr[i];
    return sum;
}

void solve(){
    ll n; cin>>n;
    vector<ll> arr(n);

    for(auto &x: arr) cin>>x;
    sort(arr.begin(), arr.end());

    cout<<sum(arr, 0) + sum(arr, 1)<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}