#include<bits/stdc++.h>

using namespace std;

void solve(){
    string str; cin>>str;
    int len = str.length();

    int left, right, res = INT_MIN;
    for(int i = 0; i < len - 1; i++){
        // trường họp chẵn
        left = i; right = i + 1;
        while(left >= 0 && right < len && str[left] == str[right]){
            res = max(res, right - left + 1);
            left--; right++;
        }

        // trưởng hợp lẻ
        left = i; right = i;
        while(left >= 0 && right < len && str[left] == str[right]){
            res = max(res, right - left + 1);
            left--; right++;
        }
    }

    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}