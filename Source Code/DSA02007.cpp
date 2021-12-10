#include<bits/stdc++.h>

using namespace std;

void back_track(string s, int k, string &max_num){
    if(k == 0) return;
    int len = s.size();
    for(int i = 0; i < len - 1; i++){
        for(int j = i + 1; j < len; j++){
            if(s[i] < s[j]){
                swap(s[i], s[j]);
                if(s.compare(max_num) > 0) max_num = s;
                back_track(s, k - 1, max_num);
                swap(s[i], s[j]);
            }
        }
    }
}

string solve(string s, int n){
    string max_num = s;
    back_track(s, n, max_num);

    return max_num;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a; cin>>a;
    int n; 
    string s;
    while(a--){
        cin>>n>>s;
        cout<<solve(s, n)<<endl;
    }
    return 0;
}