#include<bits/stdc++.h>

using namespace std;

int n,k;
int arr[50][50];
int tmp[50] = {};
bool tick[50];
vector< vector<int> > res;

void handle(){
    int sum = 0, j = 1;
    for(int i = 1; i <= n; i++){
        sum += arr[i][tmp[j++]];
    }
    if(sum == k){
        vector<int> temp;
        for(int i = 1; i <= n; i++) temp.push_back(tmp[i]);
        res.push_back(temp);
    }
}

void back_track(int len){
    for(int i = 1; i <= n; i++){
        if(tick[i]) continue;
        tick[i] = true;
        tmp[len] = i;
        if(len == n) handle();
        else back_track(len + 1);
        tick[i] = false;
    }
}

void solve(){
    res.clear();
    memset(tick, false, sizeof(tick));

    cin>>n>>k;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin>>arr[i][j];
    }

    back_track(1);

    cout<<res.size()<<endl;
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < n; j++) cout<<res[i][j]<<" ";
        cout<<endl;
    }
}

int main(){
    solve();
}