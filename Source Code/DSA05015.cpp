#include<bits/stdc++.h>

using namespace std;
const long long MOD = 1e9 + 7;

void solve(){
    int n, k; cin>>n>>k;

    long long res = 1;
    if(k > n) cout<<0;
    else{
        for(int i = n; i >= n - k + 1; i--){
            res = (res*i)%MOD;
        }
        cout<<res;
    }

    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}