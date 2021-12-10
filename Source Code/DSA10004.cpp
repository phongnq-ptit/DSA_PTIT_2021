#include<bits/stdc++.h>

using namespace std;

vector<int> List[1005];

bool euler_cycle(int U){
    for(int i = 1; i <= U; i++)
        if(List[i].size() % 2 != 0)
            return false;
    return true;
}

bool euler_way(int U){
    int cnt = 0;
    for(int i = 1; i <= U; i++)
        if(List[i].size() % 2 != 0)
            cnt++;
    return cnt == 2;
}

void solve(){
    for(int i = 1; i <= 1000; i++) List[i].clear();

    int U, V, u, v; cin>>U>>V;

    while(V--){
        cin>>u>>v;
        List[u].push_back(v);
        List[v].push_back(u);
    }

    if(euler_cycle(U)) cout<<2<<endl;
    else if(euler_way(U)) cout<<1<<endl;
    else cout<<0<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}