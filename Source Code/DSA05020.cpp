#include<bits/stdc++.h>

using namespace std;

int dp[1005][1005], arr[1005][1005];;
void solve(){
    memset(dp, 0, sizeof(dp));
    int n, m; cin>>n>>m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin>>arr[i][j];

    for(int i = 1; i <= n; i++) dp[i][1] = dp[i - 1][1] + arr[i][1];
    for(int i = 1; i <= m; i++) dp[1][i] = dp[1][i - 1] + arr[1][i];
    for(int i = 2; i <= n; i++)
        for(int j = 2; j <= m; j++)
            dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + arr[i][j];

    cout<<dp[n][m]<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}