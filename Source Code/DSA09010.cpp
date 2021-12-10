#include<bits/stdc++.h>

using namespace std;

vector<int> List[1005];
bool tick[1005];

void BFS(int u){
    queue<int> que; que.push(u);
    tick[u] = true;
    while(!que.empty()){
        int x = que.front(); que.pop();
        for(int i = 0; i < List[x].size(); i++){
            int y =  List[x][i];
            if(!tick[y]){
                tick[y] = true;
                que.push(y);
            }
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
    }

    int res = 0;
    for(int i = 1; i <= vertex; i++){
        if(!tick[i]){
            res++;
            BFS(i);
        }
    }

    if(res == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}