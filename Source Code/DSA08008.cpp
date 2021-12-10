#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    ll n; cin>>n;
    queue<ll> que; que.push(1);

    while(true){
        for(int i = 0; i <= 1; i++) {
            ll tmp = que.front()*10 + i;
            que.push(tmp);
        }
        if(que.front()%n == 0){
            cout<<que.front()<<endl;
            break;
        } else que.pop();
    }
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}