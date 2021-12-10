#include<bits/stdc++.h>

using namespace std;

void solve(){
    string s; cin>>s;
    int len = s.length();
    vector<bool> tick(len, false); // đánh dấu ví trí các dấu ngoặc đúng là true, ngược lại là false
    stack<int> st;

    for(int i = 0; i < len; i++){
        if(s[i] == '(') st.push(i);
        else if(!st.empty()){
            tick[i] = true;
            tick[st.top()] = true;
            st.pop();
        }
    }

    int res = 0;
    for(int i = 0; i < len; i++){
        if(tick[i]) res++;
    }

    cout<<res<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}