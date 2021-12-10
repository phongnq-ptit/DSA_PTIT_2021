#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int &x: arr) cin>>x;

    int sum = 0, res = INT_MIN;
    for(int i: arr){
        sum = max(i, sum + i);
        res = max(res, sum);
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