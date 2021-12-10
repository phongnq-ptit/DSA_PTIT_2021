#include<bits/stdc++.h>

using namespace std;
set<string> dictionary, tick;

int solve(){
    dictionary.clear();
    tick.clear();
    int n; cin>>n;
    string st, en, temp; cin>>st>>en;
    while(n--){
        cin>>temp;
        dictionary.insert(temp);
    }

    queue<pair<string, int>> que; que.push({st, 1});
    tick.insert(st);
    while(!que.empty()){
        auto tmp = que.front(); que.pop();
        string value = tmp.first;
        int step = tmp.second;

        if(value == en) return step;

        for(int i = 0; i < value.length(); i++){
            char c = value[i];
            for(char j = 'A'; j <= 'Z'; j++){
                value[i] = j;
                if(dictionary.find(value) != dictionary.end() && tick.find(value) == tick.end()){
                    tick.insert(value);
                    if(value == en) return step + 1;
                    que.push({value, step + 1});
                }
            }
            value[i] = c;
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--){
        cout<<solve()<<endl;
    }
    return 0;
}