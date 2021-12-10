#include<bits/stdc++.h>

using namespace std;
void solve(){
    int n, k; cin>>n;
    queue<int> que;
    while(n--){
        cin>>k;
        if(k == 1) cout<<que.size()<<endl;
        if(k == 2) {
            if(que.empty()) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        if(k == 3){
            int value; cin>>value;
            que.push(value);
        }
        if(k == 4 && !que.empty()) que.pop();
        if(k == 5) {
            if(que.empty()) cout<<-1<<endl;
            else cout<<que.front()<<endl;
        }
        if(k == 6){
            if(que.empty()) cout<<-1<<endl;
            else cout<<que.back()<<endl;
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