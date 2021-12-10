#include<bits/stdc++.h>

using namespace std;
#define pii pair<int, int>

vector<pii> vt;
bool tick[505][505];
int matrix[505][505];

void solve(){
    vt.clear();
    memset(tick, false, sizeof(tick));
    int n, m; cin>>n>>m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin>>matrix[i][j];
            if(matrix[i][j] == 1) vt.push_back({i, j});
        }
    }

    int cnt = 0;
    for(int i = 0; i < vt.size(); i++){
        if(!tick[vt[i].first][vt[i].second]){
            tick[vt[i].first][vt[i].second] = true;
            cnt++;
            queue<pii> que; que.push({vt[i].first, vt[i].second});
            while(!que.empty()){
                pii tmp = que.front(); que.pop();
                for(int row = tmp.first - 1; row <= tmp.first + 1; row++){
                    for(int col = tmp.second - 1; col <= tmp.second + 1; col++){
                        if(!tick[row][col] && matrix[row][col] == 1){
                            tick[row][col] = true;
                            que.push({row, col});
                        }
                    }
                }
            }
        }
    }

    cout<<cnt<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}