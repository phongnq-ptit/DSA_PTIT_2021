#include<bits/stdc++.h>

using namespace std;

int dp[1005][1005];
void solve(){
    string s1, s2; cin>>s1;
    s2 = s1; reverse(s2.begin(), s2.end());
    memset(dp, 0, sizeof(dp));

    int n = s1.length(), m = s2.length();
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else 
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }

    cout<<n - dp[n][m]<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}