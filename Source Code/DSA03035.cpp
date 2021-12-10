#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr(n), tick(n);
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
        tick[arr[i] - 1] = i;
    }

    int max_len = 0, count = 1;
    for(int i = 1; i < n; i++){
        if(tick[i - 1] < tick[i]){
            ++count;
            max_len = max(count, max_len);
        } else count = 1;
    }

    cout<<n - max_len<<endl;
}

int main(){
    solve();
    return 0;
}