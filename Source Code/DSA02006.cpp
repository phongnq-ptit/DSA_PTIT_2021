#include<bits/stdc++.h>

using namespace std;

int n,k;
bool check = true;
int arr[15];
int binary[15] = {};
vector< vector<int> > ans;

void print_result(vector<int> res){
    int n = res.size();
    cout<<"[";
    for(int i = 0; i < n - 1; i++) cout<<res[i]<<" ";
    cout<<res[n - 1]<<"] ";
}

void handle(){
    vector<int> res;
    for(int i = 1; i <= n; i++)
        if(binary[i] == 1) 
            res.push_back(arr[i]);

    int sum = 0;
    for(int i = 0; i < res.size(); i++) sum += res[i];

    if(sum == k) {
        check = false;
        ans.push_back(res);
    }
}

// sinh xau nhi phan
void back_track(int index){
    for(int i = 0; i <= 1; i++){
        binary[index] = i;
        if(index == n) handle();
        else back_track(index + 1);
    }
}

void solve(){
    cin>>n>>k;
    for(int i = 1; i <= n; i++) cin>>arr[i];
    sort(arr + 1, arr + n + 1);

    back_track(1);
    
    if(ans.empty()) cout<<-1;
    else {
        sort(ans.begin(), ans.end());
        for(int i = 0; i < ans.size(); i++){
            print_result(ans[i]);
        }
    }
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
        check = true;
        ans.clear();
    }
    return 0;
}