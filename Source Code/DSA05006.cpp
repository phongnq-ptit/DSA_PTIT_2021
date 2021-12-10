#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    vector<int> sum_sub_array(n); sum_sub_array[0] = arr[0];
    int max_sum_subArr = arr[0];
    for(int i = 1; i < n; i++){
        sum_sub_array[i] = arr[i];
        for(int j = 0; j < i; j++){
            if(arr[j] < arr[i])
                sum_sub_array[i] = max(sum_sub_array[i], sum_sub_array[j] + arr[i]);
        }
        max_sum_subArr = max(max_sum_subArr, sum_sub_array[i]);
    }

    cout<<max_sum_subArr<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}