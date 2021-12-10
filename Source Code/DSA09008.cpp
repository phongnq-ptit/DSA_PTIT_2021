#include<bits/stdc++.h>

using namespace std;

vector<int> List[1005];
bool tick[1005];

void DFS(int u){
    tick[u] = true;
    for(int i = 0; i < List[u].size(); i++){
        if(!tick[List[u][i]]){
            DFS(List[u][i]);
        }
    }
}

void solve(){
    for(int i = 0; i < 1001; i++) List[i].clear();
    memset(tick, false, sizeof(tick));

    int vertex, edge; cin>>vertex>>edge;

    while(edge--){
        int u, v; cin>>u>>v;
        List[u].push_back(v);
        List[v].push_back(u);
    }

    int res = 0;
    for(int i = 1; i <= vertex; i++){
        if(!tick[i]){
            res++;
            DFS(i);
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