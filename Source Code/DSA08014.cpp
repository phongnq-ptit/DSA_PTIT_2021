#include<bits/stdc++.h>

using namespace std;

int r, c, res;
int matrix[505][505];
bool tick[505][505];

void solve(){
    memset(tick, false, sizeof(tick));
    cin>>r>>c;
    queue<pair<pair<int, int>, int>> que;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cin>>matrix[i][j];
            if(matrix[i][j] == 2)
                que.push({{i, j}, 0});
        }
    }

    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            if(matrix[i][j] == 1)
                if(matrix[i - 1][j] == 0 && matrix[i + 1][j] == 0 && matrix[i][j - 1] == 0 && matrix[i][j + 1] == 0){
                    cout<<-1<<endl;
                    return;
                }
        }
    }

    while(!que.empty()){
        auto tmp = que.front(); que.pop();
        auto value = tmp.first;
        int row = value.first, col = value.second;
        int day = tmp.second;
        
        if(!tick[row - 1][col] && matrix[row - 1][col] == 1){
            que.push({{row - 1, col}, day + 1});
            tick[row - 1][col] = true;
        }

        if(!tick[row + 1][col] && matrix[row + 1][col] == 1){
            que.push({{row + 1, col}, day + 1});
            tick[row + 1][col] = true;
        }

        if(!tick[row][col - 1] && matrix[row][col - 1] == 1){
            que.push({{row, col - 1}, day + 1});
            tick[row][col - 1] = true;
        }

        if(!tick[row][col + 1] && matrix[row][col + 1] == 1){
            que.push({{row, col + 1}, day + 1});
            tick[row][col + 1] = true;
        }

        res = day;
    }

    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}