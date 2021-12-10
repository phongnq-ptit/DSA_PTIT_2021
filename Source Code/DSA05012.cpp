#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;

ll C[1005][1005]; // C(n,k) = C(n - 1, k - 1) + C(n - 1, k)
void combinational(){
    for(int n = 0; n <= 1000; n++){
        for(int k = 0; k <= n; k++){
            if(n == k || k == 0) C[n][k] = 1;
            else C[n][k] = C[n - 1][k - 1] + C[n - 1][k]; 
            C[n][k] %= MOD;
        }
    }
}

void solve(){
    int n, k; cin>>n>>k;
    cout<<C[n][k]<<endl;
}

int main(){
    combinational();
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}