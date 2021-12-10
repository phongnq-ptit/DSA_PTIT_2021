#include<bits/stdc++.h>

using namespace std;

vector<int> List[1005];
bool tick[1005], res;

void reset(){
    for(int i = 1; i <= 1000; i++) List[i].clear();
    memset(tick, false, sizeof(tick));
    res = false;
}

void DFS(int u, int tmp){
    tick[u] = true;
    for(int i: List[u])
        if(!tick[i])
            DFS(i, u);
        else if(tick[i] && i != tmp) 
            res = true;
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
        memset(tick, false, sizeof(tick));
        DFS(i, i);
    }
    
    cout<<(res? "YES" : "NO")<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}