#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n, k; cin>>n>>k;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) cin>>arr[i];

    sort(arr.begin(), arr.end(), greater<int>());

    for(int i = 0; i < k; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}