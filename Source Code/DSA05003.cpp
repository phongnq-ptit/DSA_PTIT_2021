#include<bits/stdc++.h>

using namespace std;

int result[105][105][105]; // xâu con chung dài nhất khi xem đến vị trí i của s1 và vị trí j của s2 và k của s3
void solve(){
    int n, m, p; cin>>n>>m>>p;
    string s1, s2, s3; cin>>s1>>s2>>s3;

    for(int i = 0; i <= n; i++) result[i][0][0] = 0;
    for(int i = 0; i <= m; i++) result[0][i][0] = 0;
    for(int i = 0; i <= p; i++) result[0][0][i] = 0;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            for(int k = 1; k <= p; k++){
                if(s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1])
                    result[i][j][k] = result[i - 1][j - 1][k - 1] + 1;
                else 
                    result[i][j][k] = max(result[i - 1][j][k], max(result[i][j - 1][k], result[i][j][k - 1]));
            }
        }
    }

    cout<<result[n][m][p]<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}