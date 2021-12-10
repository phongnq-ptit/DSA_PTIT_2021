#include<bits/stdc++.h>

using namespace std;

int n,m, res;
int arr[15][15];
vector<vector<bool>> tick(15, vector<bool>(15, false));

void back_track(int i, int j){
    if(i == n && j == m) res++;

    if(!tick[i + 1][j] && i < n){
        tick[i][j] = true;
        back_track(i + 1, j);
        tick[i][j] = false;
    }
    if(!tick[i][j + 1] && j < m){
        tick[i][j] = true;
        back_track(i, j + 1);
        tick[i][j] = false;
    }
}

void solve(){
    res = 0; 
    cin>>n>>m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++) cin>>arr[i][j];
    }

    back_track(1, 1);

    cout<<res<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}