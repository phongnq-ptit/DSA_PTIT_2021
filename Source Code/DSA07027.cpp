#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    stack<int> st;
    vector<int> res(n);
    for(auto &x : arr) cin>>x;

    for(int i = n - 1; i >= 0; i--){
        while(!st.empty() && arr[i] >= st.top()) st.pop();
        if(st.empty()) res[i] = -1;
        else res[i] = st.top();
        st.push(arr[i]);
    }

    for(auto i: res) cout<<i<<" ";
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}