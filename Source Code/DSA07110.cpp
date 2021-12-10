#include<bits/stdc++.h>

using namespace std;

void solve(){
    string s; cin>>s;
    stack<char> st;
    bool check = false;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else{
            switch(s[i]){
                case ')':
                    if(!st.empty() && st.top() != '(') check = true;
                    else if(!st.empty() && st.top() == '(') st.pop();
                    break;
                case '}':
                    if(!st.empty() && st.top() != '{') check = true;
                    else if(!st.empty() && st.top() == '{') st.pop();
                    break;
                case ']':
                    if(!st.empty() && st.top() != '[') check = true;
                    else if(!st.empty() && st.top() == '[') st.pop();
                    break;
            }
        }
        if(check) break;
    }

    cout<<(check? "NO" : "YES")<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}