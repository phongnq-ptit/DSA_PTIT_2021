#include<bits/stdc++.h>

using namespace std;

int arr[6], ope[6], tmp[6];
bool is_ok, tick[6];
/**
 * arr[6] là các toán hạng
 * ope[6] là trường hợp tương ứng của các toán tử với 1 = '+', 2 = '-', 3 = '*'
 * tmp[6] là hoán vị của toán hạng
*/
void check_23(){
    int ans;

    if(ope[1] == 1) ans = arr[tmp[1]] + arr[tmp[2]];
    if(ope[1] == 2) ans = arr[tmp[1]] - arr[tmp[2]];
    if(ope[1] == 3) ans = arr[tmp[1]] * arr[tmp[2]];

    for(int i = 3; i <= 5; i++){
        if(ope[i - 1] == 1) ans += arr[tmp[i]];
        if(ope[i - 1] == 2) ans -= arr[tmp[i]];
        if(ope[i - 1] == 3) ans *= arr[tmp[i]];
    }

    if(ans == 23) is_ok = true;
}

void back_track_ope(int index){
    for(int i = 1; i <= 3; i++){
        ope[index] = i;
        if(index == 4) check_23();
        else back_track_ope(index + 1);
    }
}

void back_track_permutation(int index){
    for(int i = 1; i <= 5; i++){
        if(!tick[i]){
            tmp[index] = i;
            tick[i] = true;
            if(index == 5) back_track_ope(1);
            else back_track_permutation(index + 1);
            tick[i] = false;
        }
    }
}

void solve(){
    is_ok = false;
    memset(tick, false, sizeof(tick));
    for(int i = 1; i <= 5; i++) cin>>arr[i];

    back_track_permutation(1);

    cout<<(is_ok? "YES" : "NO")<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}