#include<bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

long long power(long long a, long long b){
    if(b == 1) return a % MOD;
    long long res = power(a, b/2);
    if(b%2 == 0) return res * res % MOD;
    else return a * (res * res % MOD) % MOD;
}

void solve(){
    string n, k; cin>>n;
    k = n; reverse(k.begin(), k.end());

    cout<<power(stoll(n), stoll(k))<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}