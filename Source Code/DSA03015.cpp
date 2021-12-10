#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n, s, m; cin>>n>>s>>m;
    int sum = 0;
    // (s - s/7) là các ngày có thể mua được lương thực
    // vì ngày CN shop đóng cửa
    for(int i = 1; i <= s - s/7; i++){
        sum += n;
        if(sum >= s * m){
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}