#include<bits/stdc++.h>

using namespace std;

int k, n, m;
string dict[105], tmp;
char word[5][5];
bool tick[5][5];
vector<string> res;

bool check(string tmp){
    for(int i = 0; i < k; i++)
        if(dict[i] == tmp)
            return true;
    return false;
}

void back_track(int row, int col, string tmp){
    tick[row][col] = true;
    tmp.push_back(word[row][col]);
    if(check(tmp)) res.push_back(tmp);

    for(int i = row - 1; i <= row + 1 && row <= n; i++){
        for(int j = col - 1; j <= col + 1 && col <= m; j++){
            if(!tick[i][j] && i >= 1 && j >= 1)
                back_track(i, j, tmp);
        }
    }

    tmp.pop_back();
    tick[row][col] = false;
}

void solve(){
    res.clear();
    memset(tick, false, sizeof(tick));
    cin>>k>>n>>m;
    for(int i = 0; i < k; i++) cin>>dict[i];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin>>word[i][j];
    
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            back_track(i, j, tmp);

    if(res.empty()) cout<<-1;
    else {
        for(string val: res) cout<<val<<" ";
    }
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}