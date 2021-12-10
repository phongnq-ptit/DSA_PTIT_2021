#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    ll n; cin>>n;
    queue<string> que; que.push("6"); que.push("8");
    char temp[2] = {'6', '8'};
    vector<string> res;
    while(true){
        for(int  i = 0; i <= 1; i++){
            string tmp = que.front() + temp[i];
            que.push(tmp);
        }

        if(que.front().length() > n) break;

        res.push_back(que.front()); que.pop();
    }

    for(int i = res.size() - 1; i >= 0; i--) cout<<res[i]<<" ";
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}