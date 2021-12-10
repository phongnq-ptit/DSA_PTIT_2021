#include<bits/stdc++.h>

using namespace std;

vector<int> A[1005], B[1005];

/*
    A[i]: bán bậc ra của đỉnh i
    B[i]: bán bậc vào của đỉnh i
*/

void reset(){
    for(int i = 1; i <= 1000; i++){
        A[i].clear();
        B[i].clear();
    }
}

void solve(){
    reset();
    int U, V, u, v; cin>>U>>V;

    while(V--){
        cin>>u>>v;
        A[u].push_back(v); 
        B[v].push_back(u);
    }

    for(int i = 1; i <= U; i++){
        if(A[i].size() != B[i].size()){
            cout<<0<<endl;
            return;
        }
    }

    cout<<1<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}