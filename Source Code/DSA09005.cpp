#include<bits/stdc++.h>

using namespace std;

vector<int> List[1005];
bool tick[1005];

void BFS(int u){
    queue<int> que; que.push(u);
    cout<<u<<" ";
    tick[u] = true;
    while(!que.empty()){
        int x = que.front(); que.pop();
        for(int i = 0; i < List[x].size(); i++){
            int y = List[x][i];
            if(!tick[y]){
                cout<<y<<" ";
                que.push(y); 
                tick[y] = true;
            }
        }
    }
    cout<<endl;
}

void solve(){
    memset(tick, false, sizeof(tick));
    for(int i = 0; i <= 1000; i++) List[i].clear();
    
    int vertex, edge; cin>>vertex>>edge;
    int U; cin>>U;

    while(edge--){
        int u, v; cin>>u>>v;
        List[u].push_back(v);
        List[v].push_back(u);
    }

    BFS(U);
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}