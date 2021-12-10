#include<bits/stdc++.h>

using namespace std;

void solve(){
    int vertex; cin>>vertex;
    vector<int> canh[vertex + 5];

    for(int i = 1; i <= vertex; i++){
        scanf("\n");
        string s, token; getline(cin, s);
        stringstream ss(s);;
        while(ss>>token) canh[i].push_back(stoi(token));
    }

    for(int i = 1; i <= vertex; i++){
        for(int j = 0; j < canh[i].size(); j++){
            if(i < canh[i][j]) cout<<i<<" "<<canh[i][j]<<endl;
        }
    }
}

int main(){
    solve();
    return 0;
}