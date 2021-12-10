#include<bits/stdc++.h>

using namespace std;

int selection_sort(vector<int> arr, vector<int> sorted, int n){
    int res = 0, min_idx;
    for(int i = 0; i < n; i++){
        if(arr[i] != sorted[i]){
            for(int j = i + 1; j < n; j++){
                if(sorted[i] == arr[j]){
                    min_idx = j;
                    break;
                }
            }
            swap(arr[i], arr[min_idx]);
            res++;
        }
    }
    return res;
}

void solve(){
    int n; cin>>n; 
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    vector<int> sorted(arr.begin(), arr.end());

    sort(sorted.begin(), sorted.end());
    cout<<selection_sort(arr, sorted, n)<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}
