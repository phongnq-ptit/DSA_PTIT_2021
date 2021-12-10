#include<bits/stdc++.h>

using namespace std;

void solve(){
    int s, t; cin>>s>>t;

    queue<pair<int, int>> que; que.push({s, 0}); 
    map<int, bool> tick; tick[s] = true;

    while(!que.empty()){
        pair<int, int> tmp = que.front(); que.pop();

        int value = tmp.first; 
        int step = tmp.second;

        if(value == t){
            cout<<step<<endl;
            return;
        }
        // thao tác (a)
        if(!tick[value - 1] && value - 1 >= 0){
            que.push({value - 1, step + 1});
            tick[value - 1] = true;
        }
        // thao tác (b)
        if(!tick[value * 2] && value <= t){
            que.push({value * 2, step + 1});
            tick[value * 2] = true;
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