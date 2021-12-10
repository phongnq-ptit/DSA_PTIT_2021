#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    map<char, int> tick;
    priority_queue<int> pque;
    for(char i: s) tick[i]++;
    for(auto i: tick) pque.push(i.second);

    while(n--){
        int tmp = pque.top() - 1;
        pque.pop();
        pque.push(tmp);
    }

    long long res = 0;
    while(!pque.empty()){
        res += pow(pque.top(), 2);
        pque.pop();
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