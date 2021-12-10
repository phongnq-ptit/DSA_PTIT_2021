#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n, s; cin>>n>>s;
    
    vector<int> sum(s + 1, 0);
    sum[0] = 1;
    
    while(n--){
        int val; cin>>val;
        for(int i = s; i >= val; i--)
            if(sum[i - val] == 1) 
                sum[i] = 1;
    }

    cout<<(sum[s] ? "YES" : "NO")<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}