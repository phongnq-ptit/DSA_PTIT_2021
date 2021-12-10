#include<bits/stdc++.h>

using namespace std;

void output(int arr[], int n){
    for(int i = 1; i <= n; i++){
        char c = arr[i] + 64;
        cout<<c;
    }
    cout<<" ";
}

bool danh_dau[11];
void back_track(int arr[], int n, int len){
    for(int i = 1; i <= n; i++){
        if(danh_dau[i]) continue;
        arr[len] = i;
        danh_dau[i] = true;
        if(len == n) output(arr, n);
        else back_track(arr, n, len + 1);
        danh_dau[i] = false;
    }
}

void solve(){
    string n; cin>>n;
    int arr[n.length() + 1] = {};
    memset(danh_dau, false, sizeof(danh_dau));

    back_track(arr, n.length(), 1);

    cout<<endl;
}

int main(){
    int a; cin>>a; cin.ignore();
    while(a--){
        solve();
    }
    return 0;
}