#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n, s, len, res, sum;
bool is_ok;
int money[35];
int tmp[35];

void back_track(ll index, ll len, ll sum){
    if(index == len + 1 && sum == s){
        is_ok = true;
        return;
    }
    if(index == len + 1 && sum != s) return;
    for(ll i = tmp[index - 1] + 1; i <= n; i++){
        tmp[index] = i;
        sum += money[tmp[index]];
        if(sum <= s) back_track(index + 1, len, sum);
        sum -= money[tmp[index]];
    }
}

void solve(){
    res = 0;
    is_ok = false;
    cin>>n>>s;
    for(int i = 1; i <= n; i++) cin>>money[i];

    for(int i = 1; i <= n; i++){
        len = i; sum = 0;
        back_track(1, len, sum);
        if(is_ok){
            res = len;
            break;
        }
    }

    if(is_ok) cout<<res<<endl;
    else cout<<-1<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}