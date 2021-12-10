#include<bits/stdc++.h>

using namespace std;

int n, m, res;
vector<int> graph[25];
vector< vector<bool> > tick;

void DFS(int u, int step){
    res = max(res, step);
    for(int v: graph[u]){
        if(!tick[u][v]){
            tick[u][v] = tick[v][u] = true;
            DFS(v, step + 1);
            tick[u][v] = tick[v][u] = false;
        }
    }
}

void solve(){
    for(int i = 0; i < 25; i++) graph[i].clear();
    res = INT_MIN;
    cin>>n>>m;

    int u, v;
    while(m--){
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i = 0; i < n; i++){
        tick.assign(n + 1, vector<bool>(n + 1, false));
        DFS(i, 1);
    }

    cout<<res - 1<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}