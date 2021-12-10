#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll convert(string s){
    ll ans = 0;
    for(int i = 0, n = s.length() - 1; i < s.length(); i++, n--){
        if(s[i] == '1')
            ans += pow(2, n);
    }
    return ans;
}

void solve(){
    string s1, s2; cin>>s1>>s2;
    cout<<convert(s1) * convert(s2)<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}