#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n; 
    vector<int> arr(n);
    for(int &val: arr) cin>>val;

    sort(arr.begin(), arr.end());

    int right = n - 1, cnt = 0;
    int mid = (n%2 == 0) ? (n/2 - 1) : (n/2);

    for(int i = mid; i >= 0; i--){
        if(arr[right] >= arr[i] * 2){
            right--;
            cnt++;
        }
    }

    cout<<n - cnt<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}