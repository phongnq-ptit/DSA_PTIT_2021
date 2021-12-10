#include<bits/stdc++.h>

using namespace std;

set<int> union_array; // mang hop
map<int, int> intersection; // mang giao

void input(int arr[], int n){
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
        union_array.insert(arr[i]);
        intersection[arr[i]]++;
    }
}

void solve(){
    int n, m; cin>>n>>m;
    int a[n], b[m];
    input(a, n); input(b, m);

    for(set<int>::iterator i = union_array.begin(); i != union_array.end(); i++)
        cout<<*i<<" ";
    cout<<endl;
    for(auto i: intersection) {
        if(i.second > 1)
            cout<<i.first<<" ";
    }
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
        union_array.clear();
        intersection.clear();
    }
    return 0;
}