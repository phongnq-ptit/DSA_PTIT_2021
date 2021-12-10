#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    ll n; cin>>n;
    int arr[2] = {0, 9};
    queue<ll> que; que.push(9);

    while(true){
        for(ll i = 0; i <= 1; i++){
            ll tmp = que.front()*10 + arr[i];
            que.push(tmp);
        }
        if(que.front() % n == 0){
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