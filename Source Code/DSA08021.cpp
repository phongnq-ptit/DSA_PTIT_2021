#include<bits/stdc++.h>

using namespace std;
#define pii pair<int, int>
#define piii pair<pii, int>

void solve(){
    int n, m; cin>>n>>m;
    int matrix[n + 5][m + 5];
    map<pii, bool> tick;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin>>matrix[i][j];

    // if(1 + matrix[1][1] > n || 1 + matrix[1][1] > m){
    //     cout<<-1<<endl;
    //     return;
    // }

    queue<piii> que; que.push({{1, 1}, 0});
    tick[{1, 1}] = true;

    while(!que.empty()){
        piii tmp = que.front(); que.pop();
        int row = tmp.first.first;
        int col = tmp.first.second;
        int step = tmp.second;
        int val = matrix[row][col];

        if(row == n && col == m){
            cout<<step<<endl;
            return;
        }

        if(row + val <= n && !tick[{row + val, col}]){
            tick[{row + val, col}] = true;
            que.push({{row + val, col}, step + 1});
        }

        if(col + val <= m && !tick[{row, col + val}]){
            tick[{row, col + val}] = true;
            que.push({{row, col + val}, step + 1});
        }
    }

    cout<<-1<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}