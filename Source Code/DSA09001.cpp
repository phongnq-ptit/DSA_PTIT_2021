#include<bits/stdc++.h>

using namespace std;

void solve(){
    int vertex, edge;
    cin>>vertex>>edge;
    vector<int> ke[vertex + 5];
    int u, v;
    for(int i = 0; i < edge; i++){
        cin>>u>>v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }

    for(int i = 1; i <= vertex; i++)
        sort(ke[i].begin(), ke[i].end());

    for(int i = 1; i <= vertex; i++){
        cout<<i<<": ";
        for(int j = 0; j < ke[i].size(); j++) cout<<ke[i][j]<<" ";
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