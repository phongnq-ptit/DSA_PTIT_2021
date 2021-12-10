#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n; scanf("\n");
    string s; cin>>s;
    map<char, int> tick;
    priority_queue<int> handle;
    
    for(auto i: s) tick[i]++;
    for(auto i: tick) handle.push(i.second);

    while(n != 0){
        int tmp = handle.top() - 1;
        handle.pop();
        handle.push(tmp);
        n--;
    }

    int res = 0;
    while(!handle.empty()){
        res += pow(handle.top(),2);
        handle.pop();
    }
    cout<<res<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}