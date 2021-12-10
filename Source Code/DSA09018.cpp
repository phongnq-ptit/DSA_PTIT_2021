#include<bits/stdc++.h>

using namespace std;

vector<int> List[1005];
bool tick[1005];

void reset(){
    for(int i = 1; i <= 1000; i++) List[i].clear();
    memset(tick, false, sizeof(tick));
}

void DFS(int u){
    tick[u] = true;
    for(int i: List[u])
        if(!tick[i])
            DFS(i);
}

bool check(int U){
    for(int i = 1; i <= U; i++)
        if(!tick[i])
            return false;
    return true;
}

void solve(){
    reset();
    int U, u, V, v; cin>>U>>V;
    while(V--){
        cin>>u>>v;
        List[u].push_back(v);
        List[v].push_back(u);
    }

    for(int i = 1; i <= U; i++){
        tick[i] = true;
        DFS((i == 1) ? 2 : 1);
        if(!check(U)) cout<<i<<" ";
        memset(tick, false, sizeof(tick));
    }

    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}