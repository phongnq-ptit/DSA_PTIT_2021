#include<bits/stdc++.h>

using namespace std;

int menh_gia[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
void solve(){
    int n; cin>>n;
    int res = 0;
    for(int i = 0; i < 10; i++){
        res += n/menh_gia[i];
        n %= menh_gia[i];
    }

    cout<<res<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}