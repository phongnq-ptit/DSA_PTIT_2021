#include<bits/stdc++.h>

using namespace std;

void solve(){
    string str; cin>>str;
    stack<char> st;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == '(' && (str[i - 1] == '+' || str[i - 1] == '-')) 
            st.push(str[i - 1]);
        if(!st.empty() && st.top() == '-'){
            if(str[i] == '+') str[i] = '-';
            else if(str[i] == '-') str[i] = '+';
        }
        if(!st.empty() && str[i] == ')') st.pop();
    }

    for(char val: str){
        if(val == '(' || val == ')') continue;
        cout<<val;
    }
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}