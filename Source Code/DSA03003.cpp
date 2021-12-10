#include<bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;
void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i < n; i++) cin>>arr[i];

    sort(arr.begin(), arr.end());
    long long res = 0;
    for(int i = 0; i < n; i++){
        res += arr[i] * i;
        res %= mod;
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