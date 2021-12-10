#include<bits/stdc++.h>

using namespace std;

int arr[20][20];
int n;
bool check = true;
void back_track(int x, int y, string res){
    if(x == n && y == n){
        cout<<res<<" ";
        check = false;
    }

    if(arr[x + 1][y] == 1) back_track(x + 1, y, res + "D");
    if(arr[x][y + 1] == 1) back_track(x, y + 1, res + "R");
}

void solve(){
    cin>>n;
    for(int i = 1; i <= n; i++) 
        for(int j = 1; j <= n; j++)
            cin>>arr[i][j];

    if(arr[1][1] == 0 || arr[n][n] == 0) {
        cout<<-1<<endl;
        return;
    }

    back_track(1, 1, "");

    if(check) cout<<-1;
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
        check = true;
    }
    return 0;
}