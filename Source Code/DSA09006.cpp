#include<bits/stdc++.h>

using namespace std;

vector<int> List[1005];
int before[1005];
bool tick[1005];

void DFS(int u, int v){
    if(tick[v]) return;
    tick[u] = true;
    for(int i = 0; i < List[u].size(); i++){
        int x = List[u][i];
        if(!tick[x]){
            before[x] = u;
            DFS(x, v);
        }
    }
}

void solve(){
    for(int i = 0; i < 1001; i++) List[i].clear();
    memset(tick, false, sizeof(tick));

    int vertex, edge; cin>>vertex>>edge;
    int U, V; cin>>U>>V;

    while(edge--){
        int u, v; cin>>u>>v;
        List[u].push_back(v);
        List[v].push_back(u);
    }

    DFS(U, V);

    if(!tick[V]) cout<<-1;
    else{
        vector<int> res;
        while(V != U){
            res.push_back(V);
            V = before[V];
        }
        res.push_back(U);
        reverse(res.begin(), res.end());
        for(int i: res) cout<<i<<" ";
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