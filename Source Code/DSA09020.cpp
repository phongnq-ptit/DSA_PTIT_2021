#include<bits/stdc++.h>

using namespace std;

int ma[1005][1005];
void solve(){
    memset(ma, 0, sizeof(ma));
    int n; cin>>n; 
    for(int i = 1; i <= n; i++){
        scanf("\n");
        string s, token; getline(cin, s);
        stringstream ss(s);
        while(ss>>token) {
            int tmp = stoi(token);
            ma[i][tmp] = 1; ma[tmp][i] = 1;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cout<<ma[i][j]<<" ";
        cout<<endl;
    }
}

int main(){
    solve();
    return 0;
}