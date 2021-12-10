#include<bits/stdc++.h>

using namespace std;

int n, w;
int val[100], wei[100], binary[100];
int xopt[100]; // phương án tối ưu
int fopt = INT_MIN; // giá trị tối ưu

void update(){
    int curr_val = 0;
    for(int i = 1; i <= n; i++) {
        xopt[i] = binary[i];
        curr_val += val[i] * binary[i];
    }
    fopt = curr_val;
}

void handle(){
    int curr_val = 0, curr_wei = 0;
    for(int i = 1; i <= n; i++){
        curr_val += val[i] * binary[i];
        curr_wei += wei[i] * binary[i];
    }

    if(curr_wei <= w && curr_val > fopt) update();
}

void back_track(int index){
    for(int i = 0; i < 2; i++){
        binary[index] = i;
        if(index == n) handle();
        else back_track(index + 1);
    }
}

void solve(){
    cin>>n>>w;
    for(int i = 1; i <= n; i++) cin>>val[i];
    for(int i = 1; i <= n; i++) cin>>wei[i];

    back_track(1);

    cout<<fopt<<endl;
    for(int i = 1; i <= n; i++) cout<<xopt[i]<<" ";
}

int main(){
	solve();
    return 0;
}