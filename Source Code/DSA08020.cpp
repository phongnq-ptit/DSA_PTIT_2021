#include<bits/stdc++.h>

using namespace std;
set<string> prime;
map<string, bool> tick;

void is_prime(){
    bool vis[10005]; memset(vis, false, sizeof(vis));
    for(int i = 2; i < 10000; i++){
        if(!vis[i])
            for(int j = i*i; j <= 10000; j += i) 
                vis[j] = true;
    }
    for(int i = 1000; i <= 9999; i++) 
        if(!vis[i])
            prime.insert(to_string(i));
}

int solve(){
    tick.clear();
    string st, en; cin>>st>>en;
    queue<pair<string, int>> que; que.push({st, 0});
    tick[st] = true;

    while(!que.empty()){
        auto tmp = que.front(); que.pop();
        string value = tmp.first;
        int step = tmp.second;

        if(value == en) return step;

        for(int i = 0; i < value.length(); i++){
            char c = value[i];
            for(char j = '0'; j <= '9'; j++){
                value[i] = j;
                if(value == en) return step + 1;
                if(prime.find(value) != prime.end() && !tick[value] && stoi(value) > 1000){
                    que.push({value, step + 1});
                    tick[value] = true;
                }
            }
            value[i] = c;
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    is_prime();
    int a; cin>>a;
    while(a--){
        cout<<solve()<<endl;
    }
    return 0;
}