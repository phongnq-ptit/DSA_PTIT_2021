#include<bits/stdc++.h>

using namespace std;

int result[1005][1005]; // xâu con chung dài nhất khi xem đến vị trí i của s1 và vị trí j của s2
void solve(){
    string s1, s2; cin>>s1>>s2;

    memset(result, 0, sizeof(result));

    int n = s1.length(), m = s2.length();
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(s1[i - 1] == s2[j - 1])
                result[i][j] = result[i - 1][j - 1] + 1;
            else 
                result[i][j] = max(result[i][j - 1], result[i - 1][j]);
        }
    }

    cout<<result[n][m]<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}