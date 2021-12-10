#include<bits/stdc++.h>

using namespace std;

int n, res = INT_MAX;
vector<string> arr(15);
bool tick[15] = {false};
int tmp[15] = {};

int repeat_char(int index){
    string s1 = arr[tmp[index - 1]];
    string s2 = arr[tmp[index]];
    vector<int> have(26, 0);
    int cnt = 0;
    for(auto i: s1) have[i - 'A'] = 1;
    for(auto i: s2)
        if(have[i - 'A'])
            cnt++;
    return cnt;
}

void back_track(int index, int step){
    if(step > res) return;
    if(index == n + 1){
        res = min(res, step);
        return;
    }
    for(int i = 1; i <= n; i++){
        if(tick[i]) continue;
        tick[i] = true;
        tmp[index] = i;
        int value = repeat_char(index);
        back_track(index + 1, step + value);
        tick[i] = false;
    }
}

void solve(){
    cin>>n;
    for(int i = 1; i <= n; i++) cin>>arr[i];

    back_track(1, 0);

    cout<<res<<endl;
}

int main(){
    solve();
    return 0;
}