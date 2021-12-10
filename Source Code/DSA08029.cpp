#include<bits/stdc++.h>

using namespace std;

void init(string &s){
    for(int i = 0; i < 6; i++){
        char c; cin>>c;
        s += c;
    }
}

string rotate_left(string s){
    // 3 0 2 4 1 5
    string temp = "";
    temp += s[3]; temp += s[0]; temp += s[2];
    temp += s[4]; temp += s[1]; temp += s[5];
    return temp;
}

string rotate_right(string s){
    // 0 4 1 3 5 2
    string temp = "";
    temp += s[0]; temp += s[4]; temp += s[1];
    temp += s[3]; temp += s[5]; temp += s[2];
    return temp;
}

void solve(){
    string start, finish;
    init(start); init(finish);
    
    queue<pair<string, int>> que; que.push({start, 0});
    map<string, bool> tick; tick[start] = true;

    while(!que.empty()){
        pair<string, int> tmp = que.front(); que.pop();
        string value = tmp.first;
        int step = tmp.second;

        if(value == finish){
            cout<<step<<endl;
            return;
        }

        string left = rotate_left(value);
        string right = rotate_right(value);

        if(!tick[left]){
            que.push({left, step + 1});
            tick[left] = true;
        }

        if(!tick[right]){
            que.push({right, step + 1});
            tick[right] = true;
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