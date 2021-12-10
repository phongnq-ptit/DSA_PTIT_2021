#include<bits/stdc++.h>

using namespace std;

multiset<int> res;
void input(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        res.insert(arr[i]);
    }
}

void solve(){
    int n, m; cin>>n>>m; 
    int a[n], b[m];
    input(a, n); input(b, m);

    for(auto i: res) cout<<i<<" ";
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
        res.clear();
    }
    return 0;
}