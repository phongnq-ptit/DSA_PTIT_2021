#include<bits/stdc++.h>

using namespace std;

vector<int> List[100005];
bool tick[100005];

void BFS(int u, int &cnt){
    queue<int> que; que.push(u);
    tick[u] = true; cnt++;
    while(!que.empty()){
        int x = que.front(); que.pop();
        for(int i = 0; i < List[x].size(); i++){
            int y = List[x][i];
            if(!tick[y]){
                tick[y] = true; cnt++;
                que.push(y);
            }
        }
    }
}

void solve(){
    for(int i = 1; i <= 100000; i++) List[i].clear();
    memset(tick, false, sizeof(tick));

    int vertex, edge; cin>>vertex>>edge;

    while(edge--){
        int u, v; cin>>u>>v;
        List[u].push_back(v);
        List[v].push_back(u);
    }

    int res = INT_MIN;
    for(int i = 1; i <= vertex; i++){
        if(!tick[i]){
            int cnt = 0;
            BFS(i, cnt);
            res = max(res, cnt);
        }
    }

    cout<<res<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}