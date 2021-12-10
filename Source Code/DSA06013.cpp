#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n, x; cin>>n>>x;
    vector<int> arr(n);
    map<int, int> res;

    for(int i = 0;i < n; i++){
        cin>>arr[i];
        res[arr[i]]++;
    }

    if(res[x] != 0) cout<<res[x]<<endl;
    else cout<<-1<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}