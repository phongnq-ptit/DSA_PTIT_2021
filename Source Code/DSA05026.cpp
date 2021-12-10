#include<bits/stdc++.h>

using namespace std;

int result[105][25005];
void solve(){
    int c, n; cin>>c>>n;
    int wei[n + 5];
    for(int i = 1; i <= n; i++) cin>>wei[i];

    memset(result, 0, sizeof(result));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= c; j++){
            result[i][j] = result[i - 1][j];
            if(j >= wei[i])
                result[i][j] = max(result[i - 1][j - wei[i]] + wei[i], result[i - 1][j]);
        }
    }

    cout<<result[n][c]<<endl;
}

int main(){
    solve();
    return 0;
}