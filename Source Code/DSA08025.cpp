#include<bits/stdc++.h>

using namespace std;

void solve(){
    string st, en; cin>>st>>en;
    pair<int, int> start = {st[0] - 'a' + 1, st[1] - '0'};
    pair<int, int> finish = {en[0] - 'a' + 1, en[1] - '0'};

    map<pair<int, int>, bool> tick; tick[start] = true;
    queue<pair<pair<int, int>, int>> que; que.push({start, 0});

    while(!que.empty()){
        pair<pair<int, int>, int> tmp = que.front(); que.pop();

        pair<int, int> value = tmp.first;
        int row = value.first, col = value.second;
        int step = tmp.second; 

        if(value == finish){
            cout<<step<<endl;
            return;
        }

        if(!tick[{row - 1, col - 2}] && row - 1 > 0 && col - 2 > 0){
            tick[{row - 1, col - 2}] = true;
            que.push({{row - 1, col - 2}, step + 1});
        }

        if(!tick[{row - 1, col + 2}] && row - 1 > 0 && col + 2 < 9){
            tick[{row - 1, col + 2}] = true;
            que.push({{row - 1, col + 2}, step + 1});
        }

        if(!tick[{row - 2, col - 1}] && row - 2 > 0 && col - 1 > 0){
            tick[{row - 2, col - 1}] = true;
            que.push({{row - 2, col - 1}, step + 1});
        }

        if(!tick[{row - 2, col + 1}] && row - 2 > 0 && col + 1 < 9){
            tick[{row - 2, col + 1}] = true;
            que.push({{row - 2, col + 1}, step + 1});
        }

        if(!tick[{row + 1, col - 2}] && row + 1 < 9 && col - 2 > 0){
            tick[{row + 1, col - 2}] = true;
            que.push({{row + 1, col - 2}, step + 1});
        }

        if(!tick[{row + 1, col + 2}] && row + 1 < 9 && col + 2 < 9){
            tick[{row + 1, col + 2}] = true;
            que.push({{row + 1, col + 2}, step + 1});
        }

        if(!tick[{row + 2, col - 1}] && row + 2 < 9 && col - 1 > 0){
            tick[{row + 2, col - 1}] = true;
            que.push({{row + 2, col - 1}, step + 1});
        }

        if(!tick[{row + 2, col + 1}] && row + 2 < 9 && col + 1 < 9){
            tick[{row + 2, col + 1}] = true;
            que.push({{row + 2, col + 1}, step + 1});
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