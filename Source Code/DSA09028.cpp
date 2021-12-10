#include<bits/stdc++.h>

using namespace std;

vector<int> List[105];
int color[105], U, V, M;
bool tick[105], ans;

void reset(){
    for(int i = 1; i <= 100; i++) List[i].clear();
    memset(color, 0, sizeof(color));
    memset(tick, false, sizeof(tick));
    ans = false;
}

// Kiểm tra xem các cạnh kề của đỉnh 'u' đã có màu 'c' chưa
bool check_color(int u, int c){
    for(int val : List[u])
        if(c == color[val])
            return false;
    return true;
}

void coloring(int u){
    if(u == U + 1) ans = true;
    if(ans) return;

    for(int i = 1; i <= M; i++){
        if(check_color(u, i)){
            color[u] = i; // màu 'i' của đỉnh 'u'
            coloring(u + 1);
        }
    }
}

void solve(){
    reset();
    int u, v; cin>>U>>V>>M;

    while(V--){
        cin>>u>>v;
        List[u].push_back(v);
        List[v].push_back(u);
    }

    coloring(1);

    cout<<(ans? "YES" : "NO")<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}