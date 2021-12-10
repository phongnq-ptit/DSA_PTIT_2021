#include<bits/stdc++.h>

using namespace std;

vector<int> res;
void init(vector<int> arr, int n){
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        res.push_back(arr[i]);
    }
}

void solve(){
    int n, m, k; cin>>n>>m>>k;
    vector<int> an(n); init(an, n);
    vector<int> am(m); init(am, m);

    sort(res.begin(), res.end());
    cout<<res[k - 1]<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
        res.clear();
    }
    return 0;
}