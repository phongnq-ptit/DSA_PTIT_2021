#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n, x; cin>>n>>x;
    int arr[n];
    int res = -1;
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
        if(arr[i] == x && res == -1) res = i;
    }

    cout<<res + 1<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}