#include<bits/stdc++.h>

using namespace std;

int n, x;
int arr[105];
vector< vector<int> > res;

void back_track(int index, int sum, vector<int> tmp){
    if(sum > x) return;

    if(sum == x){
        res.push_back(tmp);
        return;
    }

    for(int i = index; i <= n; i++){
        if(sum + arr[i] <= x){
            tmp.push_back(arr[i]);
            back_track(i, sum + arr[i], tmp);
            tmp.pop_back();
        }
    }
}

void solve(){
    res.clear();
    vector<int> tmp;
    cin>>n>>x;
    for(int i = 1; i <= n; i++) cin>>arr[i];

    back_track(1, 0, tmp);

    if(res.empty()) cout<<-1;
    else {
        for(int i = 0; i < res.size(); i++){
            cout<<"[";
            for(int j = 0; j < res[i].size() - 1; j++) cout<<res[i][j]<<" ";
            cout<<res[i][res[i].size() - 1]<<"]";
        }
    }
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}