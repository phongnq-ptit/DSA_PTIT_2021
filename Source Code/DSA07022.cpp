#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr(n), res(n);
    map<int, int> tick;
    for(int &val: arr){
        cin>>val;
        tick[val]++;
    }

    stack<int> st;
    for(int i = n - 1; i >= 0; i--){
        while(!st.empty() && tick[arr[i]] >= tick[arr[st.top()]])
            st.pop();
        if(!st.empty()) res[i] = arr[st.top()];
        else res[i] = -1;
        st.push(i);    
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