#include<bits/stdc++.h>

using namespace std;

int result[1005][1005]; // xâu con chung dài nhất khi xem đến vị trí i của s và vị trí j của s
void solve(){
    int n; cin>>n;
    string s; cin>>s;

    memset(result, 0, sizeof(result));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(s[i - 1] == s[j - 1] && i != j)
                result [i][j] = result[i - 1][j - 1] + 1;
            else    
                result [i][j] = max(result[i - 1][j], result[i][j - 1]);
        }
    }

    cout<<result[n][n]<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}