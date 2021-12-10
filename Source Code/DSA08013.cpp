#include<bits/stdc++.h>

using namespace std;
#define pii pair<int, int> 

int n;
int row_st, row_en, col_st, col_en;
char matrix[105][105];
bool tick[105][105];

int solve(){
    memset(tick, false, sizeof(tick));
    cin>>n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin>>matrix[i][j];

    cin>>row_st>>col_st>>row_en>>col_en;
    
    queue<pair<pii, int>> que; que.push({{row_st, col_st}, 0});
    tick[row_st][col_st] = true;

    while(!que.empty()){
        auto tmp = que.front(); que.pop();
        auto value = tmp.first;
        int row = value.first, col = value.second;
        int step = tmp.second;
        
        for(int i = row + 1; i < n; i++){
            if(matrix[i][col] == 'X') break;
            if(i == row_en && col == col_en) return step + 1;
            if(!tick[i][col]){
                que.push({{i, col}, step + 1});
                tick[i][col] = true;
            }
        }

        for(int i = row - 1; i >= 0; i--){
            if(matrix[i][col] == 'X') break;
            if(i == row_en && col == col_en) return step + 1;
            if(!tick[i][col]){
                que.push({{i, col}, step + 1});
                tick[i][col] = true;
            }
        }

        for(int i = col + 1; i < n; i++){
            if(matrix[row][i] == 'X') break;
            if(i == col_en && row == row_en) return step + 1;
            if(!tick[row][i]){
                que.push({{row, i}, step + 1});
                tick[row][i] = true;
            }
        }

        for(int i = col - 1; i >= 0; i--){
            if(matrix[row][i] == 'X') break;
            if(i == col_en && row == row_en) return step + 1;
            if(!tick[row][i]){
                que.push({{row, i}, step + 1});
                tick[row][i] = true;
            }
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--){
        cout<<solve()<<endl;
    }
    return 0;
}