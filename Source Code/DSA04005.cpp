#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
ll F[105];

void fibo(){
    F[1] = F[2] = 1;
    for(int i = 3; i <= 105; i++) F[i] = F[i - 1] + F[i - 2];
}

char process(ll n, ll k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= F[n - 2]) return process(n - 2, k);
    else return process(n - 1, k - F[n - 2]);
}

void solve(){
    ll n, k; cin>>n>>k;
    cout<<process(n, k)<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    fibo();
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}