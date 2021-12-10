#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    ll n; cin>>n;
    queue<ll> que; que.push(1);

    while(n--){
        for(ll i = 0; i <= 1; i++){
            ll tmp = que.front()*10 + i;
            que.push(tmp);
        }
        cout<<que.front()<<" ";
        que.pop();
    }

    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}