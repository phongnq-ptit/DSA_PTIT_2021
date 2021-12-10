#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    int sum = 0;
    for(int &x: arr){
        cin>>x;
        sum += x;
    }

    if(sum%2 != 0){
        cout<<"NO"<<endl;
        return;
    }
    
    int avg = sum/2;
    vector<int> dp(avg + 1, 0);
    dp[0] = 1;
    for(int x: arr){
        for(int i = avg; i >= x; i--){
            if(dp[i - x] == 1) dp[i] = 1;
        }
    }

    cout<<(dp[avg] ? "YES" : "NO")<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}