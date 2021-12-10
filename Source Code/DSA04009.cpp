#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
int n, k; 

vector< vector<ll> > mul_matrix(vector< vector<ll> > a, vector< vector<ll> > b){
    vector< vector<ll> > tmp(n, vector<ll>(n, 0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int p = 0; p < n; p++){
                tmp[i][j] += (a[i][p] % MOD * b[p][j] % MOD) % MOD;
                tmp[i][j] %= MOD;
            }
        }
    }

    return tmp;
}

vector< vector<ll> > power(vector< vector<ll> > a, ll k){
    if(k == 1) return a;
    vector< vector<ll> > ans = power(a, k/2);
    if(k%2 == 0) return mul_matrix(ans, ans);
    else return mul_matrix(a, mul_matrix(ans, ans));
}

void solve(){
    cin>>n>>k;
    vector< vector<ll> > matrix(n, vector<ll>(n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin>>matrix[i][j];

    vector< vector<ll> > res = power(matrix, k);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout<<res[i][j]<<" ";
        cout<<endl;
    }
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}