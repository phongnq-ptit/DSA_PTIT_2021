#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    ll n; cin>>n;
    vector<ll> arr(n), sum_l(n, 0), sum_r(n, 0);
    for(ll &x: arr) cin>>x;

    // tổng dãy con lớn nhất từ trái qua
    sum_l[0] = arr[0];
    for(int i = 1; i < n; i++){
        sum_l[i] = arr[i];
        for(int j = 0; j < i; j++){
            if(arr[j] < arr[i])
                sum_l[i] = max(sum_l[i], sum_l[j] + arr[i]);
        }
    }

    // tổng dãy con lớn nhất từ phải qua
    sum_r[n - 1] = arr[n - 1];
    for(int i = n - 2; i >= 0; i--){
        sum_r[i] = arr[i];
        for(int j = n - 1; j > i; j--){
            if(arr[i] > arr[j])
                sum_r[i] = max(sum_r[i], sum_r[j] + arr[i]);
        }
    }

    ll res = INT_MIN;
    for(int i = 0; i < n; i++)
        res = max(res, sum_r[i] + sum_l[i] - arr[i]);

    cout<<res<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}