#include<bits/stdc++.h>

using namespace std;

long long process(int n, long long k){
    long long mid = pow(2, n - 1);
    if(k == 1) return 1;
    if(k == mid) return n;
    if(k < mid) return process(n - 1, k);
    else return process(n - 1, k - mid);
}

void solve(){
    int n; long long k; cin>>n>>k;

    cout<<process(n, k)<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}