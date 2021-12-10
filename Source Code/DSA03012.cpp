#include<bits/stdc++.h>

using namespace std;

void solve(){
    string str; cin>>str;
    map<char, int> tick;
    int len = str.length();
    for(int i = 0; i < len; i++) tick[str[i]]++;

    int res = 1;
    if(len%2 == 0){
        for(auto i : tick){
            if(i.second > len/2) res = -1;
        }
    } else {
        for(auto i : tick){
            if(i.second > len/2 + 1) res = -1;
        }
    }

    cout<<res<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        scanf("\n");
        solve();
    }
    return 0;
}