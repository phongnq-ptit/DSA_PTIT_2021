#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    int arr[n + 5][n + 5];
    vector<int> ke[n + 5];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 1) {
                ke[i].push_back(j);
            }
        }
    }

    for(int i = 1; i <= n; i++)
        sort(ke[i].begin(), ke[i].end());

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < ke[i].size(); j++)
            cout<<ke[i][j]<<" ";
        cout<<endl;
    }
}

int main(){
    solve();
    return 0;
}