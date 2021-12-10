#include<bits/stdc++.h>

using namespace std;

void input_array(int arr[], int n){
    for(int i = 0; i < n; i++) cin>>arr[i];
}

void solve(){
    int n, m; cin>>n>>m;
    int a[n], b[m];
    input_array(a, n); input_array(b, m);
    sort(a, a + n, greater<int>()); sort(b, b + m);
    
    cout<< (long long) a[0] * b[0]<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}