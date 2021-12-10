#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n; cin.ignore();
    vector<string> arr(n);

    set<char> res;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        for(int j = 0; j < arr[i].length(); j++) res.insert(arr[i][j]);
    }

    for(auto i: res) cout<<i<<" ";
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}