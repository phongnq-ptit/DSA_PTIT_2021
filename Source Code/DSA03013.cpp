#include<bits/stdc++.h>

using namespace std;

void solve(){
    int d; cin>>d; scanf("\n");
    string str; cin>>str;
    map<char, int> tick;
    int len = str.length();
    int max_char = INT_MIN;
    for(int i = 0; i < len; i++) {
        tick[str[i]]++;
        max_char = max(max_char, tick[str[i]]);
    }

    if((max_char - 1) * d + 1 <= len) cout<<1;
    else cout<<-1;
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        scanf("\n");
        solve();
    }
    return 0;
}