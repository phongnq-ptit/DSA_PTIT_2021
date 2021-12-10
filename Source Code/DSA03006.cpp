#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n; 
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    vector<int> copy(arr.begin(), arr.end());
    sort(copy.begin(), copy.end());

    string res = "Yes";
    for(int i = 0; i < n; i++){
        if(copy[i] != arr[i] && copy[i] != arr[n - 1 - i]){
            res = "No";
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