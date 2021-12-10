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

        if(!tick[value/2] && value%2 == 0){
            que.push({value/2, step + 1});
            tick[value/2] = true;
        }

        if(!tick[value/3] && value%3 == 0){
            que.push({value/3, step + 1});
            tick[value/3] = true;
        }

        if(!tick[value - 1] && value - 1 > 0){
            que.push({value - 1, step + 1});
            tick[value - 1] = true;
        }
    }
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}