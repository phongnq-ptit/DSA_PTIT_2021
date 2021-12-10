#include<bits/stdc++.h>

using namespace std;

int convert_to_5(string s){
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '6') s[i] = '5';
    }
    return atoi(s.c_str());
}

int convert_to_6(string s){
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '5') s[i] = '6';
    }
    return atoi(s.c_str());
}

void solve(){
    string a, b; cin>>a>>b;

    int max_sum = convert_to_6(a) + convert_to_6(b);
    int min_sum = convert_to_5(a) + convert_to_5(b);

    cout<<min_sum<<" "<<max_sum;
}

int main(){
    solve();
    return 0;
}