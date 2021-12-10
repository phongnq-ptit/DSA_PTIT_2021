#include<bits/stdc++.h>

using namespace std;

vector<int> List[1005];
bool tick[1005];

void DFS(int u){
    stack<int> st; st.push(u);
    tick[u] = true;
    while(!st.empty()){
        int x = st.top(); st.pop();
        for(int i = 0; i < List[x].size(); i++){
            int y = List[x][i];
            if(!tick[y]){
                tick[y] = true;
                st.push(x); st.push(y);
                break;
            }
        }
    }
}

void solve(){   
    for(int i = 0; i < 1001; i++) List[i].clear();
    
    int vertex, edge; cin>>vertex>>edge;
    
    while(edge--){
        int u, v; cin>>u>>v;
        List[u].push_back(v);
        List[v].push_back(u);
    }

    int Q; cin>>Q;
    while(Q--){
        memset(tick, false, sizeof(tick));
        int x, y; cin>>x>>y;
        DFS(x);
        if(!tick[y]) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}