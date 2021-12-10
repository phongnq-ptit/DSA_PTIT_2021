#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n, res, total;
ll city[20][20];
ll tmp[20] = {};
bool tick[20];

void back_track(ll index){
    for(ll i = 2; i <= n; i++){
        if(tick[i]) continue;
        tick[i] = true;
        tmp[index] = i;
        total += city[tmp[index - 1]][tmp[index]];
        if(index == n) {
            if(res > total + city[tmp[n]][tmp[1]]) res = total + city[tmp[n]][tmp[1]];
        }
        else if(total < res) back_track(index + 1);
        total -= city[tmp[index - 1]][tmp[index]];
        tick[i] = false;
    }
}

void solve(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    for(ll i = 1; i < 20; i++) tick[i] = false;
    res = INT_MAX;
    total = 0;
    cin>>n;
    for(ll i = 1; i <= n; i++)
        for(ll j = 1; j <= n; j++)
            cin>>city[i][j];
    
    tmp[1] = 1;
    back_track(2);

    cout<<res<<endl;
}

int main(){
    solve();
    return 0;
}