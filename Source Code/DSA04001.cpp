#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
ll const MOD = 1e9 + 7;

ll power(int a, int b){
    if(b == 0) return 1;
    ll kq = power(a,b/2);
    if(b%2 == 0) return kq*kq%MOD;
    else  return a*(kq*kq%MOD)%MOD;
}

void solve(){
    ll n, k; cin>>n>>k;
    cout<<power(n,k)<<endl;
}

int main(){
    int a; cin>>a; 
    while(a--){
        solve();
    }
    return 0;
}