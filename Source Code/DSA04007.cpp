#include<bits/stdc++.h>

using namespace std;

void solve(){
    int k; string a, b, res = ""; cin>>k>>a>>b;
    int tmp = 0, sum;

    while(a.length() < b.length()) a = '0' + a;
    while(a.length() > b.length()) b = '0' + b;

    for(int i = a.length() - 1; i >= 0; i--){
        sum = (a[i] - '0') + (b[i] - '0') + tmp;
        res = char(sum%k + '0') + res;
        tmp = sum/k;
    }

    if(tmp > 0) res = char(tmp%k + '0') + res;

    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}