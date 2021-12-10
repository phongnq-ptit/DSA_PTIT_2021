#include<bits/stdc++.h>

using namespace std;

vector<int> List[1005];
bool tick[1005];

void reset(){
    for(int i = 1; i <= 1000; i++) List[i].clear();
    memset(tick, false, sizeof(tick));
}

bool DFS(int u){
    stack<int> st;
    st.push(u);
    while(!st.empty()){
        int x = st.top(); st.pop();
        for(int y: List[x]){
            if(!tick[y]){
                tick[y] = true;
                st.push(x); st.push(y);
                break;
            } else if(y == u) return true;
        }
    }
    return false;
}

void solve(){
    reset();
    int U, u, V, v; cin>>U>>V;
    while(V--){
        cin>>u>>v;
        List[u].push_back(v);
    }

    for(int i = 1; i <= U; i++){
        memset(tick, false, sizeof(tick));
        if(DFS(i)){
            cout<<"YES"<<endl;
            return;
        }
    }
    
    cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}