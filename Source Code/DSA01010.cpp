#include<bits/stdc++.h>

using namespace std;

int tap_quan_su(vector<int> arr, int n, int k){
	vector<int> temp(arr.begin(), arr.end());
	set<int> res(arr.begin(), arr.end());
	
	int pos = k - 1;
	while(pos >= 0 && temp[pos] == n - k + pos + 1) pos--;
	
	if(pos < 0) return arr.size();
	
	temp[pos]++;
	int val = temp[pos];
	for(int i = pos + 1; i < k; i++) temp[i] = ++val;
	
	for(int i = 0; i < k; i++) res.insert(temp[i]);
	
	return res.size() - k;
}

void solve(){
	int n, k; cin>>n>>k;
	vector<int> arr(k);
	for(int i = 0; i < k; i++) cin>>arr[i];
	
	cout<<tap_quan_su(arr, n, k)<<endl;
}

int main(){
	int a; cin>>a;
	while(a--){
		solve();
	}
	return 0;
}
