#include<bits/stdc++.h>

using namespace std;

vector<int> List[100005];
bool tick[100005];

void reset(){
    for(int i = 1; i <= 100000; i++) List[i].clear();
    memset(tick, false, sizeof(tick));
}

void BFS(int u){
    queue<int> que; que.push(u);
    while(!que.empty()){
        int x = que.front(); que.pop();
        tick[x] = true;
        for(int y: List[x])
            if(!tick[y])
                que.push(y);
    }
}

void solve(){
    reset();
    int n, m, u, v; cin>>n>>m;
    while(m--){
        cin>>u>>v;
        List[u].push_back(v);
        List[v].push_back(u);
    }

    BFS(1);

    for(int i = 1; i <= n; i++){
        if(!tick[i]){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}