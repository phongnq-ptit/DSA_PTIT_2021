#include<bits/stdc++.h>

using namespace std;

void solve(){
    string s; cin>>s;
    int n = s.length();
    vector<int> tick(n, 0);
    stack<int> st;

    for(int i = 0; i < n; i++){
        if(s[i] == '(') st.push(i);
        else if(!st.empty()){
            tick[i] = 1;
            tick[st.top()] = 1;
            st.pop();
        }
    }

    int cnt = 0, Close = 0, Open = 0;
    for(int i = 0; i < tick.size(); i++){
        if(!tick[i]){
            cnt++;
            if(s[i] == '(') Open++;
            else Close++;
        }
    }

    cout<<Close/2 + Close%2 + Open/2 + Open%2<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}