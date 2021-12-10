#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;

void mul_matrix(ll x[2][2], ll y[2][2]){
    ll a = (x[0][0] * y[0][0] + x[0][1] * y[1][0]) % MOD;
	ll b = (x[0][0] * y[0][1] + x[0][1] * y[1][1]) % MOD;  
  	ll c = (x[1][0] * y[0][0] + x[1][1] * y[1][0]) % MOD; 
  	ll d = (x[1][0] * y[0][1] + x[1][1] * y[1][1]) % MOD; 
    x[0][0] = a; x[0][1] = b; x[1][0] = c; x[1][1] = d;
}

void power(ll fibo[2][2], ll n){
    if(n == 0 || n == 1) return;
    ll tmp[2][2] = {{1 , 1}, {1 , 0}};
    power(fibo, n/2);
    mul_matrix(fibo, fibo);
    if(n%2 != 0) mul_matrix(fibo, tmp);
}

void solve(){
    ll fibo[2][2] = {{1 , 1}, {1 , 0}}; 
    ll n; cin>>n;
    power(fibo, n - 1);
    cout<<fibo[0][0]<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}