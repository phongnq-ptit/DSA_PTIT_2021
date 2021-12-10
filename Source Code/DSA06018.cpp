#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n; 
    int _max = INT_MIN, _min = INT_MAX;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
        _max = max(arr[i], _max);
        _min = min(arr[i], _min);
    }
    set<int> tmp(arr.begin(), arr.end());

    cout<< _max - _min + 1 - tmp.size()<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}