#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
ll step[101];
void frog(){
    step[1] = 1; // (1)
    step[2] = 2; // (11,2)
    step[3] = 4; // (111,12,21,3)
    for(int i = 4; i < 101; i++)
        step[i] = step[i - 1] + step[i - 2] +step[i - 3];
}

void solve(){
    int n; cin>>n;
    cout<<step[n]<<endl;
}

int main(){
    frog();
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}