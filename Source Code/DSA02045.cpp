#include<bits/stdc++.h>

using namespace std;

int n, len;
string s;
int arr[20] = {};
vector<string> res;

void back_track(int index){
    for(int i = arr[index - 1] + 1; i <= n; i++){
        arr[index] = i;
        if(index == len) {
            string temp = "";
            for(int j = 1; j <= len; j++) temp += s[arr[j] - 1];
            res.push_back(temp);
        } else back_track(index + 1);
    }
}

void solve(){
    res.clear();
    cin>>n>>s;

    for(int i = 1; i <= n; i++){
        len = i;
        back_track(1);
    }

    sort(res.begin(), res.end());
    
    for(auto i: res) cout<<i<<" ";
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}