#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    vector<int> len_sub_array(n,1);
    int res = INT_MIN;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(arr[j] < arr[i] && len_sub_array[i] < len_sub_array[j] + 1)
                len_sub_array[i] = len_sub_array[j] + 1;
        }
        res = max(res, len_sub_array[i]);
    }

    cout<<res<<endl;
}

int main(){
    solve();
    return 0;
}