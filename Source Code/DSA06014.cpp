#include<bits/stdc++.h>

using namespace std;

bool is_prime(int n){
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0) return false;
    }
    return true;
}

void solve(){
    int n; cin>>n;
    int check = -1;
    for(int i = 2; i <= n/2; i++){
        if(is_prime(i) && is_prime(n - i)){
            cout<<i<<" "<<n - i<<endl;
            check = 0;
            break;
        }
    }
    if(check == -1) cout<<check<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}