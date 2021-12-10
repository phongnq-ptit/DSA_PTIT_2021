#include<bits/stdc++.h>

using namespace std;

int n, k, s;
int tmp[20] = {};
int res = 0;

void back_track(int len){
	for(int i = tmp[len - 1] + 1; i <= n - k + len; i++){
		tmp[len] = i;
		if(len == k){
			int sum = 0;
			for(int j = 1; j <= len; j++) sum += tmp[j];
			if(sum == s) res++;
		} else back_track(len + 1);
	}
}

void solve(){
	while(true){
		res = 0;
		cin>>n>>k>>s;
		if(n == 0 && k == 0 && s == 0) break;
		back_track(1);
		cout<<res<<endl;
	}
}

int main(){
	solve();
	return 0;
}
