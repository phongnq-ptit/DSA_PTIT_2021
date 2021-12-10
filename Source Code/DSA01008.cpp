#include<bits/stdc++.h>

using namespace std;

// in dap an
void output(int arr[], int n){
	for(int i = 0; i < n; i++) cout<<arr[i];
	cout<<endl;
}

// kiem tra xem xau nhi phan co dung k bit 1 hay khong
bool check(int arr[], int n, int k){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] == 1) dem++;
	}
	if(dem == k) return true;
	return false;
}

// sinh nhi phan bang phuong phap quay lui
void next_binary(int arr[], int n, int k, int len){
	for(int i = 0; i <= 1; i++){
		arr[len] = i;
		if(len == n - 1){
			if(check(arr, n, k)) output(arr, n);
		} else next_binary(arr, n, k, len + 1);
	}
}

void solve(){
	int n, k; cin>>n>>k;
	int arr[n] = {};
	
	next_binary(arr, n, k, 0);
}

int main(){
	int a; cin>>a;
	while(a--){
		solve();
	}
	return 0;
}
