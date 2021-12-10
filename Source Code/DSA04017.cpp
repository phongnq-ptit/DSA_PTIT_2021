#include<bits/stdc++.h>

using namespace std;

vector<int> init(vector<int> arr, int n){
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    return arr;
}

void solve(){
    int n; cin>>n;
    vector<int> arr(n); arr = init(arr, n);
    vector<int> ar(n - 1); ar = init(ar, n - 1);

    int res = n;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] != ar[i]){
            res = i + 1;
            break;
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