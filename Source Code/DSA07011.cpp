#include<bits/stdc++.h>

using namespace std;

void solve(){
    string s; cin>>s;
    stack<string> st;

    int len = s.length();
    for(int i = 0; i < len; i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^'){
            string first = st.top(); st.pop();
            string second = st.top(); st.pop();
            string tmp = s[i] + second + first;
            st.push(tmp);
        } else st.push(string(1, s[i]));
    }

    cout<<st.top()<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}