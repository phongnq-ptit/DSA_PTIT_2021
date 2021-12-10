#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) cin>>arr[i];

    sort(arr.begin(), arr.end());

    int i, j;
    for(i = 0, j = n - 1; i < j; i++, j--){
        cout<<arr[j]<<" "<<arr[i]<<" ";
    }
    if(i == j) cout<<arr[i];
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}