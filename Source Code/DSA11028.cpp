#include<bits/stdc++.h>

using namespace std;

vector<int> List[100005], cnt;
bool tick[100005];

void reset(){
    for(int i = 1; i <= 100000; i++) List[i].clear();
    memset(tick, false, sizeof(tick));
    cnt.clear();
}

void DFS(int u){
    tick[u] = true;
    for(int val: List[u]){
        if(!tick[val]){
            cnt[val] = cnt[u] + 1;
            DFS(val);
        }
    }
}

void solve(){
    reset();
    int n, u, v; cin>>n;
    cnt.resize(n + 5);
    for(int i = 0; i < n - 1; i++){
        cin>>u>>v;
        List[u].push_back(v);
        List[v].push_back(u);
    }

    cnt[1] = 1;
    DFS(1);

    int res = INT_MIN;
    for(int i = 1; i <= n; i++)
        res = max(res, cnt[i]);
    
    cout<<res - 1<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}