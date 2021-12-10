#include<bits/stdc++.h>

using namespace std;

int n, m, k;
vector<int> a, b, c;

void init(vector<int> &arr, int n){
    for(int i = 0; i < n; i++){
        int value; cin>>value;
        arr.push_back(value);
    }
}

void result(){
    bool check = true;
    int x = 0, y = 0, z = 0;
    while(x < n && y < m && z < k){
        if(a[x] == b[y] && b[y] == c[z]){
            cout<<a[x]<<" ";
            check = false;
            x++; y++; z++;
        }
        else if(a[x] < b[y]) x++;
        else if(b[y] < c[z]) y++;
        else z++;
    }
    if(check) cout<<"NO";
}

void solve(){
    a.clear(); b.clear(); c.clear();
    cin>>n>>m>>k;
    init(a, n); init(b, m); init(c, k);
    result();
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}