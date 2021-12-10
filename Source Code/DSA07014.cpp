#include<bits/stdc++.h>

using namespace std;

void solve(){
    string s; cin>>s; 
    int len = s.length();
    stack<int> st;

    for(int i = len - 1; i >= 0; i--){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^'){
            int first = st.top(); st.pop();
            int second = st.top(); st.pop();
            int tmp;
            switch(s[i]){
                case '+': tmp = first + second; break;
                case '-': tmp = first - second; break;
                case '*': tmp = first * second; break;
                case '/': tmp = first / second; break;
                case '%': tmp = first % second; break;
                case '^': tmp = pow(first, second); break;
            }
            st.push(tmp);
        } else st.push(s[i] - '0');
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