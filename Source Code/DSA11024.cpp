#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    int arr[n];
    for(int &val: arr) cin>>val;

    sort(arr, arr + n);
    cout<<arr[(n - 1)/2]<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}