#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll MOD = 123456789;

// Hàm tính 2^n
ll power(ll n){
    if(n == 0) return 1;
    if(n == 1) return 2;
    ll res = power(n / 2);
    if(n%2 == 0) return res * res % MOD;
    else return (2 * ((res%MOD * res%MOD)%MOD)) % MOD;
}

void solve(){
    ll n; cin>>n;

    cout<<power(n - 1)<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}