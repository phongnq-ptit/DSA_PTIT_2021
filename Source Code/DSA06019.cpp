#include<bits/stdc++.h>

using namespace std;

struct dta{
    int val, count;
};

bool cmp(dta a, dta b){
    if(a.count > b.count) return true;
    if(a.count == b.count && a.val < b.val) return true;
    return false;
}

void solve(){
    int n; cin>>n; 
    dta arr[n];
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin>>arr[i].val;
        mp[arr[i].val]++;
    }

    for(int i = 0; i < n; i++){
        arr[i].count = mp[arr[i].val];
    }

    sort(arr, arr + n, cmp);

    for(int i = 0; i < n; i++)
        cout<<arr[i].val<<" ";
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}