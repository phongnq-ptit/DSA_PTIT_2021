#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr(n), big(n, -1), small(n, -1);
    stack<int> st1, st2;

    for(int &val: arr) cin>>val;

    // tìm phần từ lớn hơn gần nhất bên phải
    for(int i = n - 1; i >= 0; i--){
        while(!st1.empty() && arr[i] >= arr[st1.top()]) st1.pop();
        big[i] = (!st1.empty()) ? st1.top() : -1;
        st1.push(i);
    }

    // tìm phần từ nhỏ hơn gần nhất bên phải
    for(int i = n - 1; i >= 0; i--){
        while(!st2.empty() && arr[i] <= arr[st2.top()]) st2.pop();
        small[i] = (!st2.empty()) ? st2.top() : -1;
        st2.push(i);
    }

    for(int i = 0; i < n; i++)
        cout<<((big[i] != -1 && small[big[i]] != -1) ? arr[small[big[i]]] : -1)<<" ";
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}