#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr(n + 1);
    vector<int> even; // chẵn
    vector<int> odd; // lẻ
    for(int i = 1; i <= n; i++) {
        cin>>arr[i];
        if(i % 2 == 0) even.push_back(arr[i]);
        else odd.push_back(arr[i]);
    }
    
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end(), greater<int>());
    for(int i = 0, j = 0, k = 1; k <= n; k++){
        if(k % 2 == 0) cout<<even[i++]<<" ";
        else cout<<odd[j++]<<" ";
    }
    cout<<endl;
}

int main(){
    solve();
    return 0;
}