#include<bits/stdc++.h>

using namespace std;

string convert(string str){
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

    string tmp;
    for(char val: str){
        if(val == '(' || val == ')') continue;
        tmp.push_back(val);
    }

    return tmp;
}

void solve(){
    string s1, s2; cin>>s1>>s2;

    cout<<(convert(s1) == convert(s2) ? "YES" : "NO")<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}