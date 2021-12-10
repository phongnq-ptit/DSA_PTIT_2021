#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    ll n; cin>>n; 
    priority_queue<ll, vector<ll>, greater<ll> > arr; // hàng đợi ưu tiên đỉnh luôn là giá trị nhỏ nhất
    for(int i = 0; i < n; i++){
        ll value; cin>>value;
        arr.push(value);
    }

    ll res = 0;
    while(arr.size() > 1){
        ll num1 = arr.top(); arr.pop();
        ll num2 = arr.top(); arr.pop();
        arr.push(num1 + num2);
        res += num1 + num2;
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