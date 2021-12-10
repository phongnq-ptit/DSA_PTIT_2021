#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;

    queue<pair<int, int>> que; que.push({n, 0});
    map<int, bool> tick; tick[n] = true;

    while(!que.empty()){
        pair<int, int> tmp = que.front(); que.pop();

        int value = tmp.first;
        int step = tmp.second;

        if(value == 1){
            cout<<step<<endl;
            return;
        }

        // thao tac (a)
        if(!tick[value - 1]){
            que.push({value - 1, step + 1});
            tick[value - 1] = true;
        }

        // thao tac (b)
        for(int i = 2; i <= sqrt(value); i++){
            if(value%i == 0 && !tick[value/i]){
                que.push({value/i, step + 1});
                tick[value/i] = true;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}