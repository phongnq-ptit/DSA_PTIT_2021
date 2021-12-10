#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n, x; cin>>n>>x;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];

    sort(arr.begin(), arr.end());
    int res = upper_bound(arr.begin(), arr.end(), x) - arr.begin();

    if(res == 0 || res == n){
        cout<<-1<<endl;
        return;
    } else cout<<res<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}