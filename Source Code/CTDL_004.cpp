#include<bits/stdc++.h>

using namespace std;

int n, k, res = 0;
int arr[105], tmp[105] = {};

bool check(){
    for(int i = 2; i <= k; i++)
        if(arr[tmp[i - 1]] > arr[tmp[i]]) 
            return false;
    return true;
}

void back_track(int index){
    for(int i = tmp[index - 1] + 1; i <= n; i++){
        tmp[index] = i;
        if(index == k && check()) res++;
        else back_track(index + 1);
    }
}

void solve(){
    cin>>n>>k;
    for(int i = 1; i <= n; i++) cin>>arr[i];

    back_track(1);

    cout<<res<<endl;
}

int main(){
    solve();
    return 0;
}