#include<bits/stdc++.h>

using namespace std;
int dp[1005][1005];

void solve(){
    memset(dp, 0, sizeof(dp));
    string n, m; cin>>n>>m;

    for(int i = 1; i <= n.length(); i++){
        for(int j = 1; j <= m.length(); j++){
            if(n[i - 1] == m[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else 
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    cout<<dp[n.length()][m.length()]<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}