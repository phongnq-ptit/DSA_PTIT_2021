#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n, m; cin>>n>>m;
    vector<int> P(n), Q(m), res(n + m - 1, 0);
    for(int &val: P) cin>>val;
    for(int &val: Q) cin>>val;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            res[i + j] += P[i]*Q[j];
    
    for(int val: res) cout<<val<<" ";
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}