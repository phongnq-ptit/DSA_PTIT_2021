#include<bits/stdc++.h>

using namespace std;

int n, s, sum;
bool is_ok;
int money[50], tmp[50];

void back_track(int index, int len, int sum){
    if(index == len + 1 && sum == s) {
            is_ok = true;
            return;
    }
    
    if(index == len + 1 && sum != s) 
        return;

    for(int i = tmp[index - 1] + 1; i <= n; i++){
        tmp[index] = i;
        sum += money[tmp[index]];
        if(sum <= s) back_track(index + 1, len, sum);
        sum -= money[tmp[index]];
    }
}

void solve(){
    is_ok = false;
    cin>>n>>s;
    for(int i = 1; i <= n; i++) cin>>money[i];

    int len;
    for(int i = 1; i <= n; i++){
        sum = 0;
        back_track(1, i, sum);
        if(is_ok) {
            len = i;
            break;
        }
    }

    if(is_ok) cout<<len<<endl;
    else cout<<-1<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}