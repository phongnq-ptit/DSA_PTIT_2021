#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n, k; cin>>n>>k;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) cin>>arr[i];

    int res = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == k) res++;
        }
    }

    cout<<res<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}