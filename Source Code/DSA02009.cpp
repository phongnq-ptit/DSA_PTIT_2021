#include<bits/stdc++.h>

using namespace std;

int n, k, avg;
int arr[50];
bool tick[50];
bool is_ok = false;

void back_track(int sum, int count){
    if(is_ok == true) return;
    if(count == k) {
        is_ok = true;
        return;
    }
    for(int i = 1; i <= n; i++){
        if(!tick[i]){
            tick[i] = true;
            sum += arr[i];
            if(sum == avg){
                back_track(0, count + 1);
                return;
            }
            if(sum > avg) return;
            else back_track(sum, count);
            sum -= arr[i];
        }
        tick[i] = false;
    }
}

void solve(){
    is_ok = false;
    memset(tick, false, sizeof(tick));
    cin>>n>>k;
    int sum_arr = 0;
    for(int i = 1; i <= n; i++) {
        cin>>arr[i];
        sum_arr += arr[i];
    }

    if(sum_arr%k != 0){
        cout<<0<<endl;
        return;
    } else avg = sum_arr/k;

    back_track(0, 0);

    if(is_ok) cout<<1<<endl;
    else cout<<0<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}