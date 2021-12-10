#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    ll n; cin>>n;
    queue<ll> que; que.push(1);

    int res = 0;
    while(true){
        for(ll i = 0; i <= 1; i++){
            ll tmp = que.front()*10 + i;
            que.push(tmp);
        }
        
        if(que.front() <= n) {
            res++;
            que.pop();
        } else break;
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