#include<bits/stdc++.h>

using namespace std;

vector< vector<int> > res;

bool danh_dau[100];
void back_track(vector<int> arr, int n, int len){
	for(int i = 1; i <= n; i++){
		if(danh_dau[i]) continue;
		arr[len] = i;
		danh_dau[i] = true;
		if(len == n) res.push_back(arr);
		else back_track(arr, n, len + 1);
		danh_dau[i] = false;
	}
}

void solve(){
	int n; cin>>n;
	vector<int> arr(n + 1);
	
	back_track(arr, n, 1);
	
	for(int i = res.size() - 1; i >= 0; i--){
		for(int j = 1; j < res[i].size(); j++){
			cout<<res[i][j];
		}
		cout<<" ";
	}
	cout<<endl;
}

int main(){
	int a; cin>>a;
	while(a--){
		solve();
		memset(danh_dau, false, sizeof(danh_dau));
		res.clear();
	}
	return 0;
}
