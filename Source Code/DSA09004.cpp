#include<bits/stdc++.h>

using namespace std;

vector<int> List[1005];
bool tick[1005];

void DFS(int u){
    stack<int> st; st.push(u);
    cout<<u<<" ";
    tick[u] = true;
    while(!st.empty()){
        int x = st.top(); st.pop();
        for(int i = 0; i < List[x].size(); i++){
            int y = List[x][i];
            if(!tick[y]){
                cout<<y<<" ";
                tick[y] = true;
                st.push(x); st.push(y);
                break;
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

    DFS(U);
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}