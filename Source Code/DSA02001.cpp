#include<bits/stdc++.h>

using namespace std;

void output(vector<int> arr, int len){
    cout<<"[";
    for(int i = 0; i < len; i++){
        if(i != len - 1) cout<<arr[i]<<" ";
        else cout<<arr[i];
    }
    cout<<"]\n";
}

void back_track(vector<int> arr, int len){
    output(arr, len);

    if(len == 1) return;

    for(int i = 0; i < len - 1; i++) arr[i] += arr[i + 1]; 

    back_track(arr, len - 1);
}

void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];

    back_track(arr, n);
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}