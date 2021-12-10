#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr(n), res(n);
    for(int &val: arr) cin>>val;

    stack<int> st; st.push(0);
    res[0] = 1;
    for(int i = 1; i < n; i++){
        while(!st.empty() && arr[st.top()] <= arr[i]) st.pop();
        if(st.empty()) res[i] = i + 1;
        else res[i] = i - st.top();
        st.push(i);
    }

    for(int val: res) cout<<val<<" ";
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}