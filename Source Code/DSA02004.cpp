#include<bits/stdc++.h>

using namespace std;

int n;
int arr[20][20];
bool tick[20][20];
vector<string> ans;

void back_track(int i, int j, string res){
    if(i == n && j == n) ans.push_back(res);

    if(arr[i + 1][j] == 1 && i < n && tick[i + 1][j] == false) {
        tick[i][j] = true;
        back_track(i + 1, j, res + "D");
        tick[i][j] = false;
    }
    if(arr[i][j + 1] == 1 && j < n && tick[i][j + 1] == false) {
        tick[i][j] = true;
        back_track(i, j + 1, res + "R");
        tick[i][j] = false;
    }
    if(arr[i - 1][j] == 1 && i > 1 && tick[i - 1][j] == false) {
        tick[i][j] = true;
        back_track(i - 1, j, res + "U");
        tick[i][j] = false;
    }
    if(arr[i][j - 1] == 1 && j > 1 && tick[i][j - 1] == false) {
        tick[i][j] = true;
        back_track(i, j - 1, res + "L");
        tick[i][j] = false;
    }
}

void solve(){
    memset(tick, false, sizeof(tick));
    cin>>n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin>>arr[i][j];

    if(arr[1][1] == 0 || arr[n][n] == 0){
        cout<<-1<<endl;
        return;
    }

    back_track(1, 1, "");

    if(ans.empty()) cout<<-1;
    else {
        sort(ans.begin(), ans.end());
        for(int i = 0; i < ans.size(); i++)
            cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
        ans.clear();
    }
    return 0;
}