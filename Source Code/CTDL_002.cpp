#include<bits/stdc++.h>

using namespace std;

int n, k;
int arr[25], binary[25] = {};
vector< vector<int> > res;

void handle(){
    vector<int> tmp;
    int sum = 0;
    for(int i = 1; i <= n; i++) sum += arr[i] * binary[i];

    if(sum == k){
        for(int i = 1; i <= n; i++)
            if(binary[i])
                tmp.push_back(arr[i]);
        res.push_back(tmp);
    } 
}

void back_track(int index){
    for(int i = 0; i < 2; i++){
        binary[index] = i;
        if(index == n) handle();
        else back_track(index + 1);
    }
}

void solve(){
    res.clear();
    cin>>n>>k;
    for(int i = 1; i <= n; i++) cin>>arr[i];

    back_track(1);

    for(int i = 0; i < res.size(); i++){
        for(auto i: res[i]) cout<<i<<" ";
        cout<<endl;
    }
    cout<<res.size()<<endl;
}

int main(){
    solve();
    return 0;
}