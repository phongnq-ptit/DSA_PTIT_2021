#include<bits/stdc++.h>

using namespace std;

vector< vector<int> > res;
void output(vector<int> arr, int len){
    cout<<"[";
    for(int i = 0; i < len; i++){
        if(i != len - 1) cout<<arr[i]<<" ";
        else cout<<arr[i];
    }
    cout<<"] ";
}

void back_track(vector<int> arr, int len){
    res.push_back(arr);

    if(len == 1) return;

    for(int i = 0; i < len - 1; i++) arr[i] += arr[i + 1]; 

    back_track(arr, len - 1);
}

void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];

    back_track(arr, n);

    int len = 1;
    for(int i = res.size() - 1; i >= 0; i--){
        output(res[i], len);
        len++;
    }

    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
        res.clear();
    }
    return 0;
}