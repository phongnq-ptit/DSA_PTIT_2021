#include<bits/stdc++.h>

using namespace std;

int n, p, s;
bool ok[205] = {false};
bool tick[205];
vector<int> prime;
vector< vector<int> > res;

void is_prime(){
    for(int i = 2; i <= 200; i++){
        if(!ok[i]){
            prime.push_back(i);
            for(int j = i * i; j <= 200; j += i) ok[j] = true;
        }
    }
}

void back_track(int index, int sum, vector<int> tmp){
    if(sum == s && tmp.size() == n){
        res.push_back(tmp);
        return;
    }
    for(int i = index; i < prime.size(); i++){
        if(!tick[i] && sum + prime[i] <= s && tmp.size() < n){
            tmp.push_back(prime[i]);
            tick[i] = true;
            back_track(i + 1, sum + prime[i], tmp);
            tick[i] = false;
            tmp.pop_back();
        }
    }
}

void solve(){
    res.clear();
    memset(tick, false, sizeof(tick));
    cin>>n>>p>>s;

    int pos = upper_bound(prime.begin(), prime.end(), p) - prime.begin();

    vector<int> tmp;
    back_track(pos, 0, tmp);

    cout<<res.size()<<endl;
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++) cout<<res[i][j]<<" ";
        cout<<endl;
    }
}

int main(){
    is_prime();
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}