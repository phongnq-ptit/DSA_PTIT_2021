#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n, k; cin>>n>>k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];

    if(binary_search(arr.begin(), arr.end(), k)) cout<<1<<endl;
    else cout<<-1<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}