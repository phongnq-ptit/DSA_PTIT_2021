#include<bits/stdc++.h>

using namespace std;
#define pii pair<int, int>

char A[105][105];
bool tick[105][105];

void BFS(int x,int y){
    queue<pii> que; que.push({x, y});
    tick[x][y] = true;

    while(!que.empty()){
        pii tmp = que.front(); que.pop();
        int row = tmp.first, col = tmp.second;

        for(int i = row - 1; i <= row + 1; i++){
            for(int j = col - 1; j <= col + 1; j++){
                if(!tick[i][j] && A[i][j] == 'W'){
                    que.push({i, j});
                    tick[i][j] = true;
                }
            }
        }

    }
}

void solve(){
    memset(tick, false, sizeof(tick));
    int n, m; cin>>n>>m;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin>>A[i][j];
    
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(A[i][j] == '.' || tick[i][j]) continue;
            BFS(i, j);
            cnt++;
        }
    }
        
    cout<<cnt<<endl;        
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}