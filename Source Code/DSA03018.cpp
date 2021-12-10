#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;

    vector<int> res;
    while(n > 0){
        if(n%7 == 0) {
            res.push_back(7);
            n -= 7;
        } else{
            res.push_back(4);
            n -= 4;
        }
    }
    if(n < 0) cout<<-1;
    else{
        sort(res.begin(), res.end());
        for(auto x: res) cout<<x;
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