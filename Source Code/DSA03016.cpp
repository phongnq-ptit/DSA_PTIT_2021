#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,s; cin>>s>>n;

    if(n*9 < s) {
        cout<<-1<<endl;
        return;
    }
    
    vector<int> min_number(n,0); min_number[0] = 1;
    --s;
    for(int i = n - 1; i >= 1; i--){
        if(s >= 10){
            min_number[i] += 9;
            s -= 9;
        } else {
            min_number[i] += s;
            s -= s;
        }
    }
    min_number[0] += s;

    for(int i = 0; i < n; i++) cout<<min_number[i];
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}