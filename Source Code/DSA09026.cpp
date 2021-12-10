#include<bits/stdc++.h>

using namespace std;
vector<int> List[1005];
int before[1005];
bool tick[1005];

void BFS(int u){
    queue<int> que; que.push(u);
    tick[u] = true;
    while(!que.empty()){
        int x = que.front(); que.pop();
        for(int i = 0; i < List[x].size(); i++){
            int y = List[x][i];
            if(!tick[y]){
                before[y] = x;
                tick[y] = true;
                que.push(y);
            }
        }
    }
}

void solve(){
    for(int i = 0; i <= 1000; i++) List[i].clear();
    memset(tick, false, sizeof(tick));

    int vertex, edge; cin>>vertex>>edge;
    int U, V; cin>>U>>V;

    while(edge--){
        int u, v; cin>>u>>v;
        List[u].push_back(v);
    }

    BFS(U);

    if(!tick[V]) cout<<-1;
    else{
        vector<int> res;
        while(V != U){
            res.push_back(V);
            V = before[V];
        }
        res.push_back(U);
        for(int i = res.size() - 1; i >= 0; i--) cout<<res[i]<<" ";
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