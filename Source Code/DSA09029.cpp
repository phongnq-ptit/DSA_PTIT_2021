#include<bits/stdc++.h>

using namespace std;

vector<int> List[1005];
bool tick[1005], check;
int U, V;

void reset(){
    for(int i = 1; i <= 1000; i++) List[i].clear();
    memset(tick, false, sizeof(tick));
    check = false;
}

void DFS(int u, int cnt){
    if(cnt == U) check = true;
    if(check) return;

    tick[u] = true;
    for(int val : List[u])
        if(!tick[val])
            DFS(val, cnt + 1);
    tick[u] = false;
}

void solve(){
    reset();
    int u, v; cin>>U>>V;

    while(V--){
        cin>>u>>v;
        List[u].push_back(v);
        List[v].push_back(u);
    }

    for(int i = 1; i <= U; i++){
        DFS(i, 1);

        if(check) break;
    }

    cout<<(check? 1 : 0)<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}