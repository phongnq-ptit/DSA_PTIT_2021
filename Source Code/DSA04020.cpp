#include<bits/stdc++.h>

using namespace std; 

int binarySearch(vector<int> arr, int left, int right, int key){
    while(left <= right){
        int mid = (left + right)/2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] > key) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}

void solve(){
    int n, k; cin>>n>>k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    int res = binarySearch(arr, 0, n - 1, k);
    if(res == -1) cout<<"NO"<<endl;
    else cout<<res + 1<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}