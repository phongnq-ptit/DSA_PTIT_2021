#include<bits/stdc++.h>

using namespace std;

void solve(){
    string s; getline(cin, s);
    stack<char> st;
    bool is_ok; 

    for(int i = 0; i < s.length(); i++){
        if(s[i] == ')'){
            is_ok = true;
            char tmp = st.top(); st.pop();
            while(tmp != '('){
                if(tmp == '+' || tmp == '-' || tmp == '*' || tmp == '/')
                    is_ok = false;
                
                tmp = st.top(); st.pop();
            }
            if(is_ok) break;
        } else st.push(s[i]);
    }

    cout<<(is_ok ? "Yes" : "No")<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        scanf("\n");
        solve();
    }
    return 0;
}