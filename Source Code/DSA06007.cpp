#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    vector<int> temp(n);
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
        temp[i] = arr[i];
    }

    sort(temp.begin(), temp.end());
    int left = -1, right = -1;
    for(int i = 0; i < n; i++){
        if(left == -1 && temp[i] != arr[i]) left = i + 1;
        if(temp[i] != arr[i]) right = i + 1;
    }

    cout<<left<<" "<<right;
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}