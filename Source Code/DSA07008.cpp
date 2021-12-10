#include<bits/stdc++.h>

using namespace std;

int cmp(char c){
    switch(c){
        case '^': return 0;
        case '*':
        case '/':
        case '%': return 1;
        case '+':
        case '-': return 2;
        case '(': return 3; 
    }
    return 4;
}

void solve(){
    string s, res; cin>>s;
    stack<char> st;

    for(int i = 0; i < s.length(); i++){
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) 
            res.push_back(s[i]);
        else{
            switch(s[i]){
                case '(':
                    st.push(s[i]); break;
                case ')':
                    while(!st.empty() && st.top() != '('){
                        res.push_back(st.top());
                        st.pop();
                    }
                    st.pop(); // xóa dấu '('
                    break;
                case '+': case '-': case '*': case '/': case '%': case '^':
                    while(!st.empty() && cmp(st.top()) <= cmp(s[i])){
                        res.push_back(st.top());
                        st.pop();
                    }
                    st.push(s[i]);
                    break;
            }
        }
    }

    while(!st.empty()){
        if(st.top() != '(') res.push_back(st.top());
        st.pop();
    }
    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie();
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}