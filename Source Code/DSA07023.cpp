#include<bits/stdc++.h>

using namespace std;

void solve(){
    scanf("\n");
    string s; getline(cin, s);
    stringstream ss(s);
    string token;
    stack<string> words;
    while(ss >> token) words.push(token);

    while(!words.empty()){
        cout<<words.top()<<" ";
        words.pop();
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