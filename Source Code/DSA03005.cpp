#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    vector<int> arr(n);
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++) cin>>arr[i];

    sort(arr.begin(), arr.end());
    if(k > n/2){
        for(int i = 0; i < n - k; i++) sum1 += arr[i];
        for(int i = n - k; i < n; i++) sum2 += arr[i];
    } else {
        for(int i = 0; i < k; i++) sum1 += arr[i];
        for(int i = k; i < n; i++) sum2 += arr[i];
    }

    cout<<abs(sum2 - sum1)<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}