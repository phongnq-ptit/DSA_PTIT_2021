#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n, x; cin>>n>>x;
    vector<int> arr(n);
    multimap<int, int> mmp;

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
        mmp.insert(make_pair(abs(x - arr[i]), arr[i]));
    }

    for(auto i: mmp)
        cout<<i.second<<" ";
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}